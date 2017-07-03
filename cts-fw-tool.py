#!/usr/bin/env python3
#
# Tool to unpack and pack CTS (Connection Technology Systems Inc.) firmware
# images used in the HES line of FTTx managed fiber media converters/switches.
#
#   -- noah@hack.se, 2017
#
#
# Usage: ./cts-fw-tool.py <command> <args>
#   ./cts-fw-tool.py unpack <input.fw>
#   ./cts-fw-tool.py pack <output.fw> <start_install.sh> <fw_install> <kernel.img> <rootfs.sfs>
#
# start_install.sh frees up memory by killing most processes and takes care of
# updating the MTD (Flash) partitions using the fw_install tool.
#
# The kernel.img is expected to be a u-boot legacy uImage while the rootfs.sfs
# is expected to be a Squashfs 2.1 little-endian file system compressed with
# (non-standard) LZMA (see firmware-mod-kit).
# They are written to /dev/mtd/1 and /dev/mtd/2 respectively.

import os
import struct
import sys

def compute_checksum(f):
    # A buffer memory location matching the .init section is repeatedly
    # added to the checksum for every block added.. don't change these.
    dotinit = 0x85bc
    block_size = 0x1000
    checksum = 0
    r = f.seek(4)
    while True:
        checksum <<= 1                       # Seed from previous round
        buf = bytearray(f.read(block_size))  # Python 2.x compat
        bytes_read = len(buf)
        for i in range(bytes_read):
            checksum += buf[i]
        checksum += dotinit
        if bytes_read < block_size:
            break
    return (checksum + dotinit) & 0xffffffff

def unpack_fw_payload(f, filename, size):
    with open(filename, 'wb') as o:
        buf = f.read(size)
        if len(buf) != size:
            print('[E] Expected {} bytes for file {}, got {}'.format(script_size, filename, len(buf)))
            sys.exit(1)
        o.write(buf)
        print('[+] Saved {:>7} bytes payload as: {}'.format(size, filename))

def unpack(firmware):
    print('[i] Unpacking {}'.format(firmware))
    with open(firmware, 'rb') as f:
        print('[i] Reading 12 byte header...')
        (checksum, script_size, bin_size) = struct.unpack('<LLL', f.read(12))
        print('[+] Header checksum:                0x{:08x}'.format(checksum))
        print('[+] Header start_install.sh size:   0x{:08x} ({})'.format(script_size, script_size))
        print('[+] Header fw_install size:         0x{:08x} ({})'.format(bin_size, bin_size))

        print('[i] Computing firmware checksum...')
        computed_checksum = compute_checksum(f)
        print('[+] Computed checksum:              0x{:08x}'.format(computed_checksum))
        if computed_checksum != checksum:
            print('[E] Aborting due to unexpected checksum')
            sys.exit(1)

        f.seek(12)
        unpack_fw_payload(f, 'out_start_install.sh', script_size)
        unpack_fw_payload(f, 'out_fw_install', bin_size)

        print('[i] Reading 12 bytes header...')
        (kimage_size, rimage_size, cimage_size) = struct.unpack('<LLL', f.read(12))
        print('[+] Header kernel.img size:         0x{:08x} ({})'.format(kimage_size, kimage_size))
        print('[+] Header rootfs.sfs size:         0x{:08x} ({})'.format(rimage_size, rimage_size))
        print('[+] Header cimage size:             0x{:08x} ({})'.format(cimage_size, cimage_size))
        if kimage_size:
            unpack_fw_payload(f, 'out_kernel.img', kimage_size)
        if rimage_size:
            unpack_fw_payload(f, 'out_rootfs.sfs', rimage_size)
        if cimage_size:
            unpack_fw_payload(f, 'out_cimage.img', cimage_size)

        (pos, size) = (f.tell(), os.stat(firmware).st_size)
        if pos != size:
            print('[E] Expected file position {} not at end position {}'.format(pos, size))
            sys.exit(1)

def pack_fw_payload(f, filename, size):
    with open(filename, 'rb') as payload:
        f.write(payload.read())
        print('[+] Wrote {:>7} bytes payload from file: {}'.format(size, filename))

def pack(firmware, file_start_install, file_fw_install, file_kimage, file_rimage, file_cimage):
    print('[i] Packing {}'.format(firmware))
    with open(firmware, 'w+b') as f:
        checksum = 0
        script_size = os.stat(file_start_install).st_size
        bin_size = os.stat(file_fw_install).st_size
        print('[i] Writing 12 byte header...')
        f.write(struct.pack('<LLL', 0, script_size, bin_size))
        print('[+] Header checksum:                0x{:08x}'.format(checksum))
        print('[+] Header start_install.sh size:   0x{:08x} ({})'.format(script_size, script_size))
        print('[+] Header fw_install size:         0x{:08x} ({})'.format(bin_size, bin_size))

        print('[i] Writing install payloads...')
        pack_fw_payload(f, file_start_install, script_size)
        pack_fw_payload(f, file_fw_install, bin_size)

        kimage_size = 0 if not file_kimage else os.stat(file_kimage).st_size
        rimage_size = 0 if not file_rimage else os.stat(file_rimage).st_size
        cimage_size = 0 if not file_cimage else os.stat(file_cimage).st_size
        print('[i] Writing 12 byte header...')
        f.write(struct.pack('<LLL', kimage_size, rimage_size, cimage_size))
        print('[+] Header kernel.img size:         0x{:08x} ({})'.format(kimage_size, kimage_size))
        print('[+] Header rootfs.sfs size:         0x{:08x} ({})'.format(rimage_size, rimage_size))
        print('[+] Header cimage size:             0x{:08x} ({})'.format(cimage_size, cimage_size))

        print('[i] Writing image payloads...')
        if kimage_size:
            pack_fw_payload(f, file_kimage, kimage_size)
        if rimage_size:
            pack_fw_payload(f, file_rimage, rimage_size)
        if cimage_size:
            pack_fw_payload(f, file_cimage, cimage_size)

        print('[i] Computing firmware checksum...')
        computed_checksum = compute_checksum(f)
        print('[+] Updating checksum in header:    0x{:08x}'.format(computed_checksum))
        f.seek(0)
        f.write(struct.pack('<L', computed_checksum))

def main():
    if len(sys.argv) < 3:
        self = sys.argv[0]
        print('Usage: {} <command> <args>'.format(self))
        print('  {} unpack <input.fw>'.format(self))
        print('  {} pack <output.fw> <start_install.sh> <fw_install> <kernel.img> <rootfs.sfs>'.format(self))
        return
    cmd = sys.argv[1]
    if 'unpack'.startswith(cmd):
        unpack(sys.argv[2])
    elif 'pack'.startswith(cmd):
        (firmware, file_start_install, file_fw_install, file_kimage, file_rimage) = sys.argv[2:]
        pack(firmware, file_start_install, file_fw_install, file_kimage, file_rimage, None)
    else:
        print('[E] Unknown arguments, try without args to see usage')
        sys.exit(1)

if __name__ == '__main__':
    main()
    print('')
