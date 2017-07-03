#ifndef _CTS_COMMON_STRING_H_
#define _CTS_COMMON_STRING_H_

// Event log Define ============================================
static const char CTS_COM_EVENT_ERROR[6][27] = {"",
												"boot failed",
												"load config failed",
												"load default config failed",
												"save config failed",
												"save default config failed"};

static const char CTS_COM_EVENT_WARNING[24][28] = {"",
												"login failed",
												"module down",              //local module power down or removed
												"module power down",        //remote module power down or removed("module down(dying gasp)")
												"power module down",        //power module down
												"power fan failed",
												"backup config failed",
												"auto provision",
												"fan failed",
												"temperature abnormality",
												"voltage abnormality",
												"tx bias abnormality",
												"loop",
												"upgrade",
												"",
												"digital input",
												"digital output",
												"module down",              //remote fiber down
												"temperature overheat",
												"power supply not installed",
												"module update",
												"missing",
												"system power over threshold",
												"power over budget"
												};

static const char CTS_COM_EVENT_INFO[38][24] = {"",
												"cold start",
												"warm start",
												"login",
												"logout",
												"timeout",
												"disconnected",
												"link up",
												"link down",
												"module up",                //local module power up
												"module up",                //remote module power up
												"power supply up",          //power supply up
												"power fan ok",
												"reset",                    //3013
												"load default",             //3014
												"load default",             //3015
												"save config",              //3016
												"save default config",      //3017
												"link pass down",           //3018
												"link off",
												"backup config succeeded",
												"",                         //auto update succeeded
												"fan ok",
												"temperature normality",
												"voltage normality",
												"tx bias normality",
												"digital input",
												"digital output",
												"temperature normal",       //3028
												"power supply installed",   //3029
												"fef yes",                  //3030
												"fef no",                   //3031
												"sd yes",                   //3032
												"sd no",                    //3033
												"module update",            //3034
												"protocol sync",            //3035
												"loss sync",                //3036
												"config change"             //3037
												};

// UI Define ===================================================
#define CTS_COM_LAN_ETH_IFNAME					"eth0"

#define CTS_COM_WEB_SELECT_DHCP					"DHCP"
#define CTS_COM_WEB_SELECT_MANUAL				"Manual"
#define CTS_COM_WEB_SELECT_AUTO_NEG				"Auto-Negotiation"
#define CTS_COM_WEB_SELECT_RECURRING			"recurring"
#define CTS_COM_WEB_SELECT_DATE					"date"
#define CTS_COM_WEB_SELECT_FIRMWARE				"Firmware"
#define CTS_COM_WEB_SELECT_CONFIGURATION 		"Configuration"
#define CTS_COM_WEB_SELECT_FTP					"FTP"
#define CTS_COM_WEB_SELECT_TFTP					"TFTP"
#define CTS_COM_WEB_SELECT_ON					"On"
#define CTS_COM_WEB_SELECT_OFF					"Off"
#define CTS_COM_WEB_SELECT_COPPER				"Copper"
#define CTS_COM_WEB_SELECT_FIBER				"Fiber"
#define CTS_COM_WEB_SELECT_AUTO_COMBO			"Auto"
#define CTS_COM_WEB_SELECT_AUTO_FIBER			"Fiber priority"
#define CTS_COM_WEB_SELECT_AUTO_COPPER			"Copper priority"
#define CTS_COM_WEB_SELECT_AUTO_SEN				"Auto-Sense"
#define CTS_COM_WEB_SELECT_AUTO_MEDIA			"Auto-Media"
#define CTS_COM_WEB_SELECT_AUTO_NEG				"Auto-Negotiation"
#define CTS_COM_WEB_SELECT_MANUAL				"Manual"
#define CTS_COM_WEB_SELECT_HALF					"Half"
#define CTS_COM_WEB_SELECT_FULL					"Full"
#define CTS_COM_WEB_SELECT_ENABLE				"Enable"
#define CTS_COM_WEB_SELECT_DISABLE				"Disable"
#define CTS_COM_WEB_SELECT_ENABLED				"Enabled"
#define CTS_COM_WEB_SELECT_OPEN					"Open"
#define CTS_COM_WEB_SELECT_CLOSE				"Close"
#define CTS_COM_WEB_SELECT_DISABLED				"Disabled"
#define CTS_COM_WEB_SELECT_TELNET				"Telnet"
#define CTS_COM_WEB_SELECT_SSH					"SSH"
#define CTS_COM_WEB_SELECT_RUN_CONF				"Running-config"
#define CTS_COM_WEB_SELECT_DEFAULT_CONF			"Default-config"
#define CTS_COM_WEB_SELECT_STARTUP_CONF			"Start-up-config"
#define CTS_COM_WEB_SELECT_iMAGE1				"Image-1"
#define CTS_COM_WEB_SELECT_iMAGE2				"Image-2"
#define CTS_COM_WEB_SELECT_PASSIVE				"Passive"
#define CTS_COM_WEB_SELECT_ACTIVE				"Active"
#define CTS_COM_WEB_SELECT_RATE					"Rate"
#define CTS_COM_WEB_SELECT_EVENT				"Event"
#define CTS_COM_WEB_SELECT_WEIGHT				"Weight"
#define CTS_COM_WEB_SELECT_STRICT				"Strict"
#define CTS_COM_WEB_SELECT_VALID				"Valid"
#define CTS_COM_WEB_SELECT_INVALID				"Invalid"
#define CTS_COM_WEB_SELECT_DIGITAL_OUTPUT1		"Digital Output 1"
#define CTS_COM_WEB_SELECT_DIGITAL_OUTPUT2		"Digital Output 2"
#define CTS_COM_WEB_SELECT_RADIUS				"RADIUS"
#define CTS_COM_WEB_SELECT_TACACS				"TACACS"
#define CTS_COM_WEB_SELECT_CELCIUS				"Celcius"
#define CTS_COM_WEB_SELECT_FAHRENHEIT			"Fahrenheit"



static const char CTS_COM_WEB_COMBO_WDAY[7][4] = { 
												"Sun",
												"Mon",
												"Tue",
												"Wed",
												"Thu",
												"Fri",
												"Sat"
												};

static const char CTS_COM_CLI_WDAY[7][4] = { 
												"sun",
												"mon",
												"tue",
												"wed",
												"thu",
												"fri",
												"sat"
												};

static const char CTS_COM_CLI_MONTH[13][4] = {
										"",
										"jan",
										"feb",
										"mar",
										"apr",
										"may",
										"jun",
										"jul",
										"aug",
										"sep",
										"oct",
										"nov",
										"dec"};


static const char CTS_COM_WEB_COMBO_SYNCH_INTERVAL[8][8] = {
												" 1 Hour",
												" 2 Hour",
												" 3 Hour",
												" 4 Hour",
												" 6 Hour",
												" 8 Hour",
												"12 Hour",
												"24 Hour"
												};
//Jamie@CTS:20160829 FWR/VRG
static const char CTS_COM_WEB_COMBO_PRIVILEGE_USERLEVEL_ITEM[5][15] = {
															"Access Denied",
															"Guest",
															"HomeUser",
															"Editor",
															"SuperUser"
															};

static const char CTS_COM_WEB_COMBO_USERLEVEL_ITEM[4][15] = {
												"Access Denied",
												"Read Only",
												"Read and Write",
												"Administrator"
												};

static const char CTS_COM_WEB_COMBO_PORT_SPEED_ITEM[5][11] = {
												"10Mbps",
												"100Mbps",
												"1000Mbps",
												"Auto-Sense",
												"10Gbps"
												};

static const char CTS_COM_WEB_COMBO_PORT_NUM_ITEM[49][8] = {
												"All",
												"Port 1",
												"Port 2",
												"Port 3",
												"Port 4",
												"Port 5",
												"Port 6",
												"Port 7",
												"Port 8",
												"Port 9",
												"Port 10",
												"Port 11",
												"Port 12",
												"Port 13",
												"Port 14",
												"Port 15",
												"Port 16",
												"Port 17",
												"Port 18",
												"Port 19",
												"Port 20",
												"Port 21",
												"Port 22",
												"Port 23",
												"Port 24",
												"Port 25",
												"Port 26",
												"Port 27",
												"Port 28",
												"Port 29",
												"Port 30",
												"Port 31",
												"Port 32",
												"Port 33",
												"Port 34",
												"Port 35",
												"Port 36",
												"Port 37",
												"Port 38",
												"Port 39",
												"Port 40",
												"Port 41",
												"Port 42",
												"Port 43",
												"Port 44",
												"Port 45",
												"Port 46",
												"Port 47",
												"Port 48"
												};

static const char CTS_COM_WEB_COMBO_PORT_COMBO_MODE_ITEM[5][16] = {
												"Disable",
												"Fiber-Priority",
												"Copper-Priority",
												"Fiber-Only",
												"Copper-Only"
												};

static const char CTS_COM_WEB_COMBO_PORTBASED_VLAN_ITEM[2][2] = {"-","V"};												
static const char CTS_COM_WEB_COMBO_8021Q_VLAN_ITEM[2][2] = {"-","V"};

static const char CTS_COM_MIRROR_ITEM[4][8] = {
                                      "Disable",
                                      "By Port",
                                      "By VID",
                                      "By IP"
                                      };

static const char CTS_COM_MIRROR_IP_MODE_ITEM [2][16] = {
                                         "Destination IP",
                                         "Source IP"
                                         };
										 
										 
#if (defined(IES3106) || defined(HES3106) || defined(FOS3148))						 
static const char CTS_COM_PORT_MIRROR_NUM[7][8] = {
                                          "Disable",
                                          "Port 1 ",
                                          "Port 2 ",
                                          "Port 3 ",
                                          "Port 4 ",
                                          "Port 5 ",
                                          "Port 6 "
                                          };
#endif
#ifdef HES3109
static const char CTS_COM_PORT_MIRROR_NUM[10][8] = {
                                           "Disable",
                                           "Port 1 ",
                                           "Port 2 ",
                                           "Port 3 ",
                                           "Port 4 ",
                                           "Port 5 ",
                                           "Port 6 ",
                                           "Port 7 ",
                                           "Port 8 ",
                                           "Port 9 "
                                           };
#endif	

static const char CTS_COM_EGRESS_MIDE_ITEM[2][12] = {
                                        "By Port",
                                        "By Queue"};
										

static const char CTS_COM_LAYER1_CONTROL_ITEM[2][16] = {
                                        "No Filter Out",
                                        "Filter Out"};

static const char CTS_COM_MIRROR_SOURCE_PORT_ITEM[2][4] = {
                                        "-",
                                        "V"};							   
										
										   
static const char CTS_COM_STORM_CONTROL_ITEM[][8] = {
										"Off",
                                        "1",
										"2",
										"4",
										"8",
										"16",
										"32",
										"64",
										"128",
										"256",
										"512",
										"1K",
										"2K",
										"4K",
										"8K",
										"16K",
										"32K",
										"64K",
										"128K",
										"256K",
										"512K",
										"1024K"};
										
static const char CTS_COM_MAC_TABLE_LEARNING_ITEM[2][12] = {
                                        "Auto",
                                        "Disabled"};

static const char CTS_COM_TIME_RECURRING_MONTH_ITEM[13][4] = {
										"",
                                        "JAN",
                                        "FEB",
										"MAR",
										"APR",
										"MAY",
										"JUN",
										"JUL",
										"AUG",
										"SEP",
										"OCT",
										"NOV",
										"DEC"};

static const char CTS_COM_TIME_RECURRING_WEEK_ITEM[6][4] = {
                                        "",
										"1st",
                                        "2nd",
										"3rd",
										"4th",
										"5th"};

static const char CTS_COM_TIME_RECURRING_DAY_ITEM[7][4] = {
										"SUN",
                                        "MON",
                                        "TUE",
										"WED",
										"THU",
										"FRI",
										"SAT"};

static const char	CTS_COM_QUEUE_MODE_ITEN[5][12] = {
                                    "Disable",
                                    "Port Based",
                                    "IEEE 802.1p",
                                    "DSCP",
                                    "VID"
                                    };

static const char	CTS_COM_QOS_PRIORITY_PRIORITY_ITEN[8][3] = {
                                    "Q0",
                                    "Q1",
                                    "Q2",
                                    "Q3",
                                    "Q4",
                                    "Q5",
                                    "Q6",
                                    "Q7"
                                    };
									
static const char	CTS_COM_QOS_PRIORITY_TAG_ITEN[8][2] = {
                               "0",
                               "1",
                               "2",
                               "3",
                               "4",
                               "5",
                               "6",
                               "7"
                               };

static const char	CTS_COM_QOS_PRIORITY_REMARKING_ITEN[5][24] = {
                                          "Disable",
                                          "VID Remarking",
                                          "802.1p Remarking",
                                          "VID + 802.1p Remarking",
                                          "DSCP Remarking"
                                          };


static const char	CTS_COM_QOS_PRIORITY_DSCPREMARKING_MODE_ITEN[3][8] = {
                                             "Disable",
                                             "By DSCP",
                                             "By Port"
                                             };
											 
static const char	CTS_COM_MIRROR_IP_MODE_ITEN[2][16] = {
                                         "Destination IP",
                                         "Source IP"
                                         };
									
static const char	CTS_COM_QOS_PRIORITY_DSCP_ITEN[65][9] = {
                                 "DSCP(0)",
                                 "DSCP(1)",
                                 "DSCP(2)",
                                 "DSCP(3)",
                                 "DSCP(4)",
                                 "DSCP(5)",
                                 "DSCP(6)",
                                 "DSCP(7)",
                                 "DSCP(8)",
                                 "DSCP(9)",
                                 "DSCP(10)",
                                 "DSCP(11)",
                                 "DSCP(12)",
                                 "DSCP(13)",
                                 "DSCP(14)",
                                 "DSCP(15)",
                                 "DSCP(16)",
                                 "DSCP(17)",
                                 "DSCP(18)",
                                 "DSCP(19)",
                                 "DSCP(20)",
                                 "DSCP(21)",
                                 "DSCP(22)",
                                 "DSCP(23)",
                                 "DSCP(24)",
                                 "DSCP(25)",
                                 "DSCP(26)",
                                 "DSCP(27)",
                                 "DSCP(28)",
                                 "DSCP(29)",
                                 "DSCP(30)",
                                 "DSCP(31)",
                                 "DSCP(32)",
                                 "DSCP(33)",
                                 "DSCP(34)",
                                 "DSCP(35)",
                                 "DSCP(36)",
                                 "DSCP(37)",
                                 "DSCP(38)",
                                 "DSCP(39)",
                                 "DSCP(40)",
                                 "DSCP(41)",
                                 "DSCP(42)",
                                 "DSCP(43)",
                                 "DSCP(44)",
                                 "DSCP(45)",
                                 "DSCP(46)",
                                 "DSCP(47)",
                                 "DSCP(48)",
                                 "DSCP(49)",
                                 "DSCP(50)",
                                 "DSCP(51)",
                                 "DSCP(52)",
                                 "DSCP(53)",
                                 "DSCP(54)",
                                 "DSCP(55)",
                                 "DSCP(56)",
                                 "DSCP(57)",
                                 "DSCP(58)",
                                 "DSCP(59)",
                                 "DSCP(60)",
                                 "DSCP(61)",
                                 "DSCP(62)",
                                 "DSCP(63)"
                                 };

static const char	CTS_COM_WEB_RSTP_SW_PRIORITY_SELECT[16][6] = {
								"0",
								"4096",
								"8192",
								"12288",
								"16384",
								"20480",
								"24576",
								"28672",
								"32768",
								"36864",
								"40960",
								"45056",
								"49152",
								"53248",
								"57344",
								"61440"
								};

static const char	CTS_COM_WEB_RSTP_SW_VERSION_SELECT[2][12] = {
								"Compatible",
								"Normal"
								};
								
static const char	CTS_COM_WEB_RSTP_AGGR_PR_SELECT[16][4] = {
								"0",
								"16",
								"32",
								"48",
								"64",
								"80",
								"96",
								"112",
								"128",
								"144",
								"160",
								"176",
								"192",
								"208",
								"224",
								"240"
								};
								
static const char	CTS_COM_WEB_RSTP_SW_P2P_SELECT[3][13] = {
								"Forced True",
								"Forced False",
								"Auto"
								};
								
static const char	CTS_COM_WEB_RSTP_PHY_SETTING_SELECT[5][12] = {
								"State",
								"Path Cost",
								"Priority",
								"Edge",
								"Point2point"
								};
								
static const char	CTS_COM_WEB_IPSOURCE_GUARD_SELECT[3][12] = {
								"Fix-IP",
								"DHCP",
								"Unlimited"
								};

static const char	CTS_COM_WEB_RING_ROLE_SELECT[2][8] = {
								"Slave",
								"Master"
								};

static const char	CTS_COM_WEB_RING_ACTIVE_SELECT[2][12] = {
								"Software",
								"Hardware"
								};

static const char	CTS_COM_WEB_SNMPV3_AUTH_PROTOCOL_SELECT[3][8] = {
								"None",
								"MD5",
								"SHA"
								};

static const char	CTS_COM_WEB_SNMPV3_ENCRYPTION_SELECT[3][8] = {
								"None",
								"DES",
								"AES"
								};

static const char	CTS_COM_WEB_ZWAVE_OPERATING_MODE_SELECT[5][13] = {
								"Normal",
								"Include",
								"Exit Include",
								"Exclude",
								"Exit Exclude"
								};

static const char	CTS_COM_WEB_ZWAVE_NOTIFICATION_TYPE_SELECT[19][23] = {
								"",
								"Smoke Alarm(0x01)",
								"CO Alarm(0x02)",
								"CO2 Alarm(0x03)",
								"Heat Alarm(0x04)",
								"Water Alarm(0x05)",
								"Access Control(0x06)",
								"Home Security(0x07)",
								"Power Management(0x08)",
								"System(0x09)",
								"Emergency Alarm(0x0A)",
								"Clock(0x0B)",
								"Appliance(0x0C)",
								"Home Health(0x0D)",
								"Siren(0x0E)",
								"Water Valve(0x0F)",
								"Weather Alarm(0x10)", //10
								"Irrigation(0x11)",
								"Gas Alarm(0x12)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_SMOKE_SELECT[5][39] = {
								"Inactive/Cleared(0x00)",
								"Smoke detected(0x01)",
								"Smoke detected, Unknown Location(0x02)",
								"Smoke Alarm Test(0x03)",
								"Replacement Required(0x04)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_CO_SELECT[5][49] = {
								"Inactive/Cleared(0x00)",
								"Carbon monoxide detected(0x01)",
								"Carbon monoxide detected, Unknown Location(0x02)",
								"Carbon monoxide Test(0x03)",
								"Replacement Required(0x04)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_CO2_SELECT[5][48] = {
								"Inactive/Cleared(0x00)",
								"Carbon dioxide detected(0x01)",
								"Carbon dioxide detected, Unknown Location(0x02)",
								"Carbon dioxide Test(0x03)",
								"Replacement Required(0x04)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_HEAT_SELECT[7][47] = {
								"Inactive/Cleared(0x00)",
								"Overheat detected(0x01)",
								"Overheat detected, Unknown Location(0x02)",
								"Rapid Temperature Rise(0x03)",
								"Rapid Temperature Rise, Unknown Location(0x04)",
								"Under heat detected(0x05)",
								"Under heat detected, Unknown Location(0x06)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_WATER_SELECT[8][44] = {
								"Inactive/Cleared(0x00)",
								"Water Leak detected(0x01)",
								"Water Leak detected, Unknown Location(0x02)",
								"Water Level Dropped(0x03)",
								"Water Level Dropped, Unknown Location(0x04)",
								"Replace Water Filter(0x05)",
								"Water Flow Alarm(0x06)",
								"Water Pressure Alarm(0x07)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_LOCK_SELECT[24][68] = {
								"Inactive/Cleared(0x00)",
								"Manual Lock Operation(0x01)",
								"Manual Unlock Operation(0x02)",
								"RF Lock Operation(0x03)",
								"RF Unlock Operation(0x04)",
								"Keypad Lock Operation(0x05)", //05
								"Keypad Unlock Operation(0x06)",
								"Manual Not Fully Locked Operation(0x07)",
								"RF Not Fully Locked Operation(0x08)",
								"Auto Lock Locked Operation(0x09)",
								"Auto Lock Not Fully Operation(0x0A)", //0A
								"Lock Jammed(0x0B)",
								"All user codes deleted(0x0C)",
								"Single user code deleted(0x0D)",
								"New user code added(0x0E)",
								"New user code not added due to duplicate code(0x0F)", //0F
								"Keypad temporary disabled(0x10)", //10
								"Keypad busy(0x11)",
								"New Program code Entered - Unique code for lock configuration(0x12)",
								"Manually Enter user Access code exceeds code limit(0x13)",
								"Unlock By RF with invalid user code(0x14)",
								"Locked by RF with invalid user codes(0x15)", //15
								"Window/Door is open(0x16)",
								"Window/Door is closed(0x17)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_LOCK40_SELECT[13][75] = {
								"Barrier performing Initialization process(0x40)",
								"Barrier operation (Open / Close) force has been exceeded(0x41)",
								"Barrier motor has exceeded manufacturer¡¦s operational time limit(0x42)",
								"Barrier operation has exceeded physical mechanical limits(0x43)",
								"Barrier unable to perform requested operation due to UL requirements(0x44)",
								"Barrier Unattended operation has been disabled per UL requirements(0x45)", //05
								"Barrier failed to perform Requested operation, device malfunction(0x46)",
								"Barrier Vacation Mode(0x47)",
								"Barrier Safety Beam Obstacle(0x48)",
								"Barrier Sensor Not Detected/Supervisory Error(0x49)",
								"Barrier Sensor Low Battery Warning(0x4A)", //0A
								"Barrier detected short in Wall Station wires(0x4B)",
								"Barrier associated with non-Z-wave remote control(0x4C)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_BURGLAR_SELECT[10][42] = {
								"Inactive/Cleared(0x00)",
								"Intrusion(0x01)",
								"Intrusion, Unknown Location(0x02)",
								"Tampering, Product covering removed(0x03)",
								"Tampering, Invalid Code(0x04)",
								"Glass Breakage(0x05)", //05
								"Glass Breakage, Unknown Location(0x06)",
								"Motion Detection(0x07)",
								"Motion Detection, Unknown Location(0x08)",
								"Tampering, Product Moved(0x09)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_POWER_SELECT[16][31] = {
								"Inactive/Cleared(0x00)",
								"Power has been applied(0x01)",
								"AC mains disconnected(0x02)",
								"AC mains re-connected(0x03)",
								"Surge detected(0x04)",
								"Voltage Drop/Drift(0x05)", //05
								"Over-current detected(0x06)",
								"Over-voltage detected(0x07)",
								"Over-load detected(0x08)",
								"Load error(0x09)",
								"Replace battery soon(0x0A)", //0A
								"Replace battery now(0x0B)",
								"Battery is charging(0x0C)",
								"Battery is fully charged(0x0D)",
								"Charge battery soon(0x0E)",
								"Charge battery now!(0x0F)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_SYSTEM_SELECT[8][73] = {
								"Inactive/Cleared(0x00)",
								"System hardware failure(0x01)",
								"System software failure(0x02)",
								"System hardware failure with manufacturer proprietary failure code(0x03)",
								"System software failure with manufacturer proprietary failure code(0x04)",
								"Heartbeat(0x05)", //05
								"Tampering, Product covering removed(0x06)",
								"Emergency Shutoff(0x07)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_EMERGENCY_SELECT[4][30] = {
								"Inactive/Cleared(0x00)",
								"Contact Police(0x01)",
								"Contact Fire Service(0x02)",
								"Contact Medical Service(0x03)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_CLOCK_SELECT[4][23] = {
								"Inactive/Cleared(0x00)",
								"Wake Up Alert(0x01)",
								"Timer Ended(0x02)",
								"Time remaining(0x03)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_APPLIANCE_SELECT[22][40] = {
								"Inactive/Cleared(0x00)",
								"Program started(0x01)",
								"Program in progress(0x02)",
								"Program completed(0x03)",
								"Replace main filter(0x04)",
								"Failure to set target temperature(0x05)",
								"Supplying water(0x06)",
								"Water supply failure(0x07)",
								"Boiling(0x08)",
								"Boiling failure(0x09)",
								"Washing(0x0A)",
								"Washing failure(0x0B)",
								"Rinsing(0x0C)",
								"Rinsing failure(0x0D)",
								"Draining(0x0E)",
								"Draining failure(0x0F)",
								"Spinning(0x10)",
								"Spinning failure(0x11)",
								"Drying(0x12)",
								"Drying failure(0x13)",
								"Fan failure(0x14)",
								"Compressor failure(0x15)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_HEALTH_SELECT[7][38] = {
								"Inactive/Cleared(0x00)",
								"Leaving Bed(0x01)",
								"Sitting on bed(0x02)",
								"Lying on bed(0x03)",
								"Posture changed(0x04)",
								"Sitting on edge of bed(0x05)",
								"Volatile Organic Compound level(0x06)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_SIREN_SELECT[2][23] = {
								"Inactive/Cleared(0x00)",
								"Siren Active(0x01)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_WATER_VLV_SELECT[7][33] = {
								"Inactive/Cleared(0x00)",
								"Valve Operation(0x01)",
								"Master Valve Operation(0x02)",
								"Valve Short Circuit(0x03)",
								"Master Valve Short Circuit(0x04)",
								"Valve Current Alarm(0x05)",
								"Master Valve Current Alarm(0x06)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_WEATHER_SELECT[3][23] = {
								"Inactive/Cleared(0x00)",
								"Rain Alarm(0x01)",
								"Moisture Alarm(0x02)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_IRRIGATION_SELECT[6][31] = {
								"Inactive/Cleared(0x00)",
								"Schedule Started(0x01)",
								"Schedule Finished(0x02)",
								"Valve Table Run Started(0x03)",
								"Valve Table Run Finished(0x04)",
								"Device is not Configured(0x05)"
								};

static const char	CTS_COM_WEB_ZWAVE_ALRM_GAS_SELECT[7][49] = {
								"Inactive/Cleared(0x00)",
								"Combustible Gas detected(0x01)",
								"Combustible Gas detected, Unknown Location(0x02)",
								"Toxic Gas detected(0x03)",
								"Toxic Gas detected, Unknown Location(0x04)",
								"Gas Alarm Test(0x05)",
								"Replacement Required(0x06)"
								};

static const char	CTS_COM_WEB_ZWAVE_LIBRARY_TYPE_SELECT[12][18] = {
								"",
								"Static Controller",
								"Controller",
								"Enhanced Slave",
								"Slave",
								"Installer",
								"Routing Slave",
								"Bridge Controller",
								"Device Under Test",
								"",
								"AV Remote",
								"AV Device"
								};

static const char	CTS_COM_WEB_ZWAVE_POWERLEVEL_SELECT[10][12] = {
								"NormalPower",
								"minus1dBm",
								"minus2dBm",
								"minus3dBm",
								"minus4dBm",
								"minus5dBm",
								"minus6dBm",
								"minus7dBm",
								"minus8dBm",
								"minus9dBm"
								};

static const char	CTS_COM_WEB_ZWAVE_POWERLEVEL_TEST_STATUS_SELECT[3][16] = {
								"Test Failed",
								"Test Succes",
								"Test Inprogress"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_TYPE_SELECT[59][26] = {
								"Reserved",     //00
								"Air Temperature",
								"General Purpose",
								"Luminance",
								"Power",
								"Humidity",
								"Velocity",
								"Direction",
								"Atmospheric Pressure",
								"Barometric Pressure",
								"Solar Radiation",
								"Dew point",
								"Rain rate",
								"Tide level",
								"Weight",
								"Voltage",
								"Current",      //10
								"Carbon Dioxide CO2-level",
								"Air flow",
								"Tank capacity",
								"Distance",
								"Angle Position",
								"Rotation",
								"Water Temperature",
								"Soil Temperature",
								"Seismic Intensity",
								"Seismic Magnitude",
								"Ultraviolet",
								"Electrical Resistivity",
								"Electrical Conductivity",
								"Loudness",
								"Moisture",
								"Frequency",    //20
								"Time",
								"Target Temperature",
								"Particulate Matter 2.5",
								"Formaldehyde CH2O-level",
								"Radon Concentration",
								"Methane Density CH4",
								"Volatile Organic Compound",
								"Carbon Monoxide CO-level",
								"Soil Humidity",
								"Soil Reactivity",
								"Soil Salinity",
								"Heart Rate",
								"Blood Pressure",
								"Muscle Mass",
								"Fat Mass",
								"Bone Mass",    //30
								"Total Body Water, TBW",
								"Basic Metabolic Rate, BMR",
								"Body Mass Index, BMI",
								"Acceleration, X-axis",
								"Acceleration, Y-axis",
								"Acceleration, Z-axis",
								"Smoke Density",
								"Water Flow",
								"Water Pressure",
								"RF Signal Strength"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_TEMP_SELECT[2][15] = {
								"Celsius (C)",
								"Fahrenheit (F)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_GP_SELECT[2][14] = {
								"Percentage",
								"Dimensionless"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_LUM_SELECT[2][11] = {
								"Percentage",
								"Lux"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_POW_SELECT[2][6] = {
								"W",
								"Btu/h"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_HUMD_SELECT[2][11] = {
								"Percentage",
								"(g/m3)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_VELO_SELECT[2][4] = {
								"m/s",
								"mph"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_ATM_SELECT[2][18] = {
								"kPa",
								"inches of Mercury"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_RAIN_SELECT[2][5] = {
								"mm/h",
								"in/h"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_TIDE_SELECT[2][5] = {
								"m",
								"feet"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_WGT_SELECT[2][7] = {
								"kg",
								"pounds"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_VOLT_SELECT[2][3] = {
								"V",
								"mV"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_CUR_SELECT[2][3] = {
								"A",
								"mA"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_AIR_SELECT[2][5] = {
								"m3/h",
								"cfm"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_TANK_SELECT[3][11] = {
								"l",
								"cbm",
								"US gallons"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_DIST_SELECT[3][5] = {
								"m",
								"cm",
								"feet"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_AGL_SELECT[3][11] = {
								"Percentage",
								"North pole",
								"South pole"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_ROT_SELECT[2][4] = {
								"rpm",
								"Hz"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_SEIS_INT_SELECT[4][22] = {
								"Mercalli",
								"European Macroseismic",
								"Liedu",
								"Shindo"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_SEIS_MAG_SELECT[4][18] = {
								"Local (ML)",
								"Moment (MW)",
								"Surface wave (MS)",
								"Body wave (MB)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_LOUDNESS_SELECT[2][26] = {
								"Absolute loudness (dB)",
								"A-weighted decibels (dBA)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_MOIST_SELECT[4][29] = {
								"Percentage",
								"Volume water content (m3/m3)",
								"Impedance (k ohm)",
								"Water activity (aw)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_FREQ_SELECT[2][4] = {
								"Hz",
								"kHz"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_PM_2_5_SELECT[2][39] = {
								"mole per cubic meter (mol/m3)",
								"Absolute microgram/cubic meter (ug/m3)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_RAD_CONT_SELECT[2][30] = {
								"Becquerel/cubic meter (bq/m3)",
								"picocuries/liter (pCi/L)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_BLOOD_PRS_SELECT[2][30] = {
								"Systolic mmHg (upper number)",
								"Diastolic mmHg (lower number)"
								};

static const char	CTS_COM_WEB_ZWAVE_SENSOR_UNIT_RF_SGN_SELECT[2][18] = {
								"RSSI (Percentage)",
								"(dBm)"
								};

static const char	CTS_COM_WEB_ZWAVE_METER_ELECTRIC_SELECT[8][12] = {
								"kWh",
								"kVAh",
								"W",
								"Pulse count",
								"V",
								"A",
								"Power factor",
								"Reserved"
								};

static const char	CTS_COM_WEB_ZWAVE_METER_GAS_SELECT[8][13] = {
								"Cubic meters",
								"Cubic feet",
								"Reserved",
								"Pulse count",
								"Reserved",
								"Reserved",
								"Reserved",
								"Reserved"
								};

static const char	CTS_COM_WEB_ZWAVE_METER_WATER_SELECT[8][13] = {
								"Cubic meters",
								"Cubic feet",
								"US gallons",
								"Pulse count",
								"Reserved",
								"Reserved",
								"Reserved",
								"Reserved"
								};

static const char	CTS_COM_WEB_ZWAVE_THERMOSTAT_SETPOINT_TYPE_SELECT[16][20] = {
								"N/A",
								"Heating",
								"Cooling",
								"N/A",
								"N/A",
								"N/A",
								"N/A",
								"Furnace",
								"Dry Air",
								"Moist Air",
								"Auto Changeover",
								"Energy Save Heating",
								"Energy Save Cooling",
								"Away Heating",
								"Away Cooling",
								"Full Power"
								};

static const char	CTS_COM_WEB_ZWAVE_THERMOSTAT_MODE_SELECT[16][25] = {
								"Off",
								"Heat",
								"Cool",
								"Auto",
								"Auxiliary/Emergency Heat",
								"Resume",
								"Fan Only",
								"Furnace",
								"Dry Air",
								"Moist Air",
								"Auto Changeover",
								"Energy Save Heat",
								"Energy Save Cool",
								"Away",
								"Reserved",
								"Full Power"
								};

static const char	CTS_COM_WEB_POE_BUDGET_MODE_SELECT[2][6] = {
								"Class",
								"Fixed"
								};

static const char	CTS_COM_WEB_POE_PORT_PRIORITY_SELECT[3][9] = {
								"Critical",
								"High",
								"Low"
								};

static const char	CTS_COM_SUBNET_MASK_SELECT[31][16] = {
								"255.255.255.252",
								"255.255.255.248",
								"255.255.255.240",
								"255.255.255.224",
								"255.255.255.192",
								"255.255.255.128",
								"255.255.255.0",
								"255.255.254.0",
								"255.255.252.0",
								"255.255.248.0",
								"255.255.240.0",
								"255.255.224.0",
								"255.255.192.0",
								"255.255.128.0",
								"255.255.0.0",
								"255.254.0.0",
								"255.252.0.0",
								"255.248.0.0",
								"255.240.0.0",
								"255.224.0.0",
								"255.192.0.0",
								"255.128.0.0",
								"255.0.0.0",
								"254.0.0.0",
								"252.0.0.0",
								"248.0.0.0",
								"240.0.0.0",
								"224.0.0.0",
								"192.0.0.0",
								"128.0.0.0",
								"255.255.255.255"
								};

static const char	CTS_COM_PACK_FILTER_APP[11][16] = {
								"FTP",
								"SSH",
								"TELNET",
								"SMTP",
								"DNS",
								"HTTP",
								"POP",
								"NNTP",
								"IMAP",
								"SNMP",
								"HTTPS",
								};

static const char	CTS_COM_SYSLOG_LEVEL_OPT[8][11] = {
								"Emergency",
								"Alert",
								"Crit",
								"Error",
								"Warning",
								"Notice",
								"Info",
								"Debug"
								};

static const char	CTS_COM_TIMESERVER_DOMAIN_OPT[5][18] = {
								"time.Windows.com",
								"time.nist.gov",
								"time-nw.nist.gov",
								"time-a.nist.gov",
								"time-b.nist.gov"
								};

enum board_media_e {
    BOARD_MEDIA_COPPER      = 0x0001,
    BOARD_MEDIA_FIBER       = 0x0002,
    BOARD_MEDIA_COMBO       = 0x0004,
    BOARD_MEDIA_AUTO_COMBO  = 0x0008,
    BOARD_MEDIA_AUTO_FIBER  = 0x0010,
    BOARD_MEDIA_AUTO_COPPER = 0x0020,
    BOARD_MEDIA_MASK        = 0x003F,
    BOARD_MEDIA_NONE        = 0xFFFF,
};

enum board_speed_e {
    BOARD_TP_SPEED_AUTO_10_100_1000 = 0x0000,
    BOARD_TP_SPEED_AUTO_10_100      = 0x0100,
    BOARD_TP_SPEED_MASK             = 0x0100,
    BOARD_FP_SPEED_AUTO_100_1000    = 0x0200,
    BOARD_FP_SPEED_ONLY_1000        = 0x0400,
    BOARD_FP_SPEED_ONLY_100         = 0x0800,
    BOARD_FP_SPEED_MANUAL_100_1000  = 0x1000,
    BOARD_FP_SPEED_MANUAL_1G_10G    = 0x2000,
    BOARD_FP_SPEED_MASK             = 0x3E00,
};

#include "cts_board_string.h"


#endif /* _CTS_COMMON_STRING_H_ */
