#define ENUM_CAT_00_TEXT "Date/Time"
#define ENUM_CAT_01_TEXT "Room Unit"
#define ENUM_CAT_02_TEXT "Wireless"
#define ENUM_CAT_03_TEXT "Time switch program 1"
#define ENUM_CAT_04_TEXT "Time switch program 2"
#define ENUM_CAT_05_TEXT "Time switch program 3"
#define ENUM_CAT_06_TEXT "Time switch program 4/DHW"
#define ENUM_CAT_07_TEXT "Time switch program 5"
#define ENUM_CAT_08_TEXT "Holiday programs HC1"
#define ENUM_CAT_09_TEXT "Holiday programs HC2"
#define ENUM_CAT_0a_TEXT "Holiday programs HC3"
#define ENUM_CAT_0b_TEXT "Heating circuit 1"
#define ENUM_CAT_0c_TEXT "Cooling circuit 1"
#define ENUM_CAT_0d_TEXT "Heating circuit 2"
#define ENUM_CAT_0e_TEXT "Heating circuit 3/P"
#define ENUM_CAT_0f_TEXT "DHW"
#define ENUM_CAT_10_TEXT "Hx pump"
#define ENUM_CAT_11_TEXT "Swimming pool"
#define ENUM_CAT_12_TEXT "Primary controller/system pump"
#define ENUM_CAT_13_TEXT "Boiler"
#define ENUM_CAT_14_TEXT "Sitherm Pro"
#define ENUM_CAT_15_TEXT "Heat pump"
#define ENUM_CAT_16_TEXT "Energy counter"
#define ENUM_CAT_17_TEXT "Cascade"
#define ENUM_CAT_18_TEXT "Extra heat source"
#define ENUM_CAT_19_TEXT "Solar"
#define ENUM_CAT_1a_TEXT "Solid fuel boiler"
#define ENUM_CAT_1b_TEXT "Buffer tank"
#define ENUM_CAT_1c_TEXT "DHW storage tank"
#define ENUM_CAT_1d_TEXT "DHW direct charging"
#define ENUM_CAT_1e_TEXT "Configuration"
#define ENUM_CAT_1f_TEXT "LPB"
#define ENUM_CAT_20_TEXT "Error"
#define ENUM_CAT_21_TEXT "Service/special operation"
#define ENUM_CAT_22_TEXT "Configuration extension modules"
#define ENUM_CAT_23_TEXT "Input/output tests"
#define ENUM_CAT_24_TEXT "Status"
#define ENUM_CAT_25_TEXT "Diagnosis cascade"
#define ENUM_CAT_26_TEXT "Diagnosis producer"
#define ENUM_CAT_27_TEXT "Diagnosis consumer"
#define ENUM_CAT_28_TEXT "Burner control"
#define ENUM_CAT_29_TEXT "User defined"
#define ENUM_CAT_2a_TEXT "PPS bus"
#define ENUM_CAT_2b_TEXT "Unknown category"

#define MENU_TEXT_HFK "Heater functions"
#define MENU_TEXT_SNS "Sensors"
#define MENU_TEXT_SN1 "DS18B20 sensors"
#define MENU_TEXT_SN2 "DHT22 sensors"
#define MENU_TEXT_CHK "Check for new parameters"
#define MENU_TEXT_DLG "Display log file"
#define MENU_TEXT_SLG "Plot log file"
#define MENU_TEXT_CFG "Settings"
#define MENU_TEXT_URL "URL commands"
#define MENU_TEXT_HWT "HowTo"
#define MENU_TEXT_FAQ "FAQ"
#define MENU_TEXT_YES "Yes"
#define MENU_TEXT_NO "No"
#define MENU_TEXT_ON "On"
#define MENU_TEXT_OFF "Off"
#define MENU_TEXT_QSC "Scanning for devices..."
#define MENU_TEXT_QFD "Device address found"
#define MENU_TEXT_QFA "Device query failed"
#define MENU_TEXT_QRA "Running test with destination device address"
#define MENU_TEXT_QST "Start test"
#define MENU_TEXT_QTE "Test finished"
#define MENU_TEXT_QFE "Done"

#define MENU_DESC_HFK "Allows you to query or set parameters of your heating system, sorted in different clickable categories."
#define MENU_DESC_CFG "Displays a list of configuration options. You can change most of these by using the extended URL commands."
#define MENU_DESC_URL "Displays a list of extended commands which you can access by directly entering them in the browser's address line. These commands are also necessary to link up BSB-LAN to any home automation system such as FHEM."
#define MENU_TEXT_VB1 "Verbose mode activated!"
#define MENU_TEXT_VB2 "Verbose mode deactivated!"
#define MENU_TEXT_VB3 "Verbose output affects both the serial console of the mega2560 as well as (optional) logging bus data to SD card, so this can fill up your card pretty fast! The html output is kept unchanged."
#define MENU_TEXT_SR1 "Serial monitor activated!"
#define MENU_TEXT_SR2 "Serial monitor deactivated!"
#define MENU_TEXT_SR3 "Only serial output is affected."
#define MENU_TEXT_ER1 "ERROR: invalid parameter line!"
#define MENU_TEXT_ER2 "ERROR: invalid parameter value!"
#define MENU_TEXT_ER3 "ERROR: set failed!"
#define MENU_TEXT_ER4 "parameter is readonly."
#define MENU_TEXT_ER5 "ERROR: wrong type!"
#define MENU_TEXT_ER6 "ERROR: line not found!"
#define MENU_TEXT_ER7 "ERROR: protected GPIO pin!"
#define MENU_TEXT_BST "Heater statistics"
#define MENU_TEXT_BRS "Furnace and hot water duration is set to zero"
#define MENU_TEXT_24A "24h averages"
#define MENU_TEXT_24N "New average parameters"
#define MENU_TEXT_DTR "File datalog.txt removed and recreated."
#define MENU_TEXT_DTD "Download data"
#define MENU_TEXT_DTF "Failed to create datalog.txt!"
#define MENU_TEXT_DTO "Error opening datalog.txt!"
#define MENU_TEXT_RAM "Free memory"
#define MENU_TEXT_BUS "Bus system"
#define MENU_TEXT_BRW "Read/Write"
#define MENU_TEXT_BRO "Read-Only"
#define MENU_TEXT_OWP "1-Wire bus pins"
#define MENU_TEXT_DHP "DHT22 bus pins"
#define MENU_TEXT_EXP "Protected GPIO pins"
#define MENU_TEXT_MAC "MAC-Address"
#define MENU_TEXT_LGP "Logging the following parameters every"
#define MENU_TEXT_SEC "seconds"
#define MENU_TEXT_BZ1 "Burner runtime level 1"
#define MENU_TEXT_BT1 "Burner cycles level 1"
#define MENU_TEXT_BZ2 "Burner runtime level 2"
#define MENU_TEXT_BT2 "Burner cycles level 2"
#define MENU_TEXT_TZ1 "DHW runtime"
#define MENU_TEXT_TT1 "DHW cycles"
#define MENU_TEXT_MXI "MAX! current temperature"
#define MENU_TEXT_MXS "MAX! temperature setpoint"
#define MENU_TEXT_MXV "MAX! valve opening"
#define MENU_TEXT_MXN "No MAX! data received yet."
#define MENU_TEXT_BDT "BSB-Data telegrams (irrespective of interval)"
#define MENU_TEXT_BUT "Logging unknown bus telegrams only"
#define MENU_TEXT_MMD "Monitor mode"
#define MENU_TEXT_VBL "Verbosity level"
#define MENU_TEXT_AVT "Calculating 24h averages for the following parameters"
#define MENU_TEXT_LBO "Log broadcast bus-telegrams only"
#define MENU_TEXT_LGI "New logging interval"
#define MENU_TEXT_LGN "New logging parameters"

#define STR516_TEXT "Standard values TSP heating circuit 1"
#define STR536_TEXT "Standard values TSP heating circuit 2 "
#define STR556_TEXT "Standard values TSP3"
#define STR576_TEXT "Standard values TSP 4"
#define STR648_TEXT "Holiday operating level HC1"
#define STR652_TEXT "Holiday period 1 HC2: first day"
#define STR653_TEXT "Holiday period 1 HC2: last day"
#define STR658_TEXT "Holiday operating level HC2"
#define STR700_TEXT "Operating mode heat circuit 1"
#define STR710_TEXT "Room temperature Comfort setpoint HC1"
#define STR712_TEXT "Room temp reduced setpoint heat circuit 1"
#define STR714_TEXT "Room temp frost protection setpoint HC1"
#define STR720_TEXT "Heating curve 1 slope"
#define STR721_TEXT "Heating curve parallel displacement"
#define STR726_TEXT "Heating curve adaptation heat circuit 1"
#define STR730_TEXT "Summer/winter changeover temp heat circuit 1"
#define STR732_TEXT "24-hour heating limit HC1"
#define STR740_TEXT "Flow temp min limitation heat circuit 1"
#define STR741_TEXT "Flow temp max limitation heat circuit 1"
#define STR750_TEXT "Room temp gain factor heat circuit 1"
#define STR760_TEXT "Room temperature limitation heating circuit 1"
#define STR770_TEXT "Room temp setpoint boost HC1 (boost heating)"
#define STR780_TEXT "Quick setback heat circuit 1"
#define STR790_TEXT "Optimum start control max forward shift HC1"
#define STR791_TEXT "Optimum stop control max forward shift HC1"
#define STR800_TEXT "Start reduced room temp setpoint increase HC1"
#define STR801_TEXT "End reduced room temp setpoint increase HC1"
#define STR850_TEXT "Flooring plaster dry up function"
#define STR851_TEXT "Floor setpoint manually HC1"
#define STR884_TEXT "Pump speed at the heating plant´s design point"
#define STR885_TEXT "Modulating pump PWM min"
#define STR886_TEXT "Outside temperature at max heat demand"
#define STR887_TEXT "Boiler setpoint at design outside temperature"
#define STR888_TEXT "Limit of temperature boost of dT controller"
#define STR894_TEXT "Delta flow / return temperature at TiAussenNorm"
#define STR1000_TEXT "Operating mode heat circuit 2"
#define STR1010_TEXT "Room temperature Comfort setpoint HC2"
#define STR1012_TEXT "Room temp reduced setpoint heat circuit 2"
#define STR1014_TEXT "Room temp frost protection setpoint HC2"
#define STR1020_TEXT "Heating curve 2 slope"
#define STR1021_TEXT "Heating curve parallel displacement"
#define STR1026_TEXT "Heating curve adaptation heat circuit 2"
#define STR1030_TEXT "Summer/winter changeover temp heat circuit 2"
#define STR1032_TEXT "24-hour heating limit HC2"
#define STR1040_TEXT "Flow temp min limitation heat circuit 2"
#define STR1041_TEXT "Flow temp max limitation heat circuit 2"
#define STR1050_TEXT "Room temp gain factor heat circuit 2"
#define STR1060_TEXT "Room temperature limitation heating circuit 2"
#define STR1070_TEXT "Room temp setpoint boost HC2 (boost heating)"
#define STR1080_TEXT "Quick setback heat circuit 2"
#define STR1090_TEXT "Optimum start control max forward shift HC2"
#define STR1091_TEXT "Optimum stop control max forward shift HC2"
#define STR1100_TEXT "Start reduced room temp setpoint increase HC2"
#define STR1101_TEXT "End reduced room temp setpoint increase HC2"
#define STR1130_TEXT "Temp boost mixing valve heat circuit"
#define STR1134_TEXT "Actuator running time heat circuit"
#define STR1150_TEXT "Flooring plaster dry up function"
#define STR1151_TEXT "Floor setpoint manually HC2"
#define STR1600_TEXT "DHW operating mode"
#define STR1610_TEXT "DHW temperature nominal setpoint"
#define STR1612_TEXT "DHW temperature reduced setpoint"
#define STR1620_TEXT "DHW release"
#define STR1640_TEXT "Legionella function"
#define STR1641_TEXT "Legionella function periodicity"
#define STR1642_TEXT "Legionella function day"
#define STR1644_TEXT "Time for legionella function"
#define STR1645_TEXT "Legionella function setpoint"
#define STR1646_TEXT "Dwelling time at legionella function setpoint"
#define STR1647_TEXT "Circul. pump operation during legionella func"
#define STR1660_TEXT "DHW circulating pump release"
#define STR1661_TEXT "DHW circulating pump cycling "
#define STR2201_TEXT "Heat generation lock"
#define STR2210_TEXT "Boiler temp min limitation"
#define STR2212_TEXT "Boiler temp max limitation"
#define STR2440_TEXT "Maximum degree of modulation in heating mode"
#define STR2441_TEXT "Max. speed at maximum output in heating mode"
#define STR2442_TEXT "Output during controller delay time"
#define STR2443_TEXT "Modul. start value at controller release in DHW"
#define STR2451_TEXT "Burner off time min"
#define STR2452_TEXT "Max. control diff without abortion of pause time"
#define STR2453_TEXT "Controller delay after burner is started up"
#define STR2454_TEXT "Boiler switching differential"
#define STR2455_TEXT "Minimum switch-off differential of burner"
#define STR2456_TEXT "Maximum switch-off differential of burner"
#define STR2471_TEXT "Pump overrun time"
#define STR2472_TEXT "Pump overrun temperature DHW"
#define STR2521_TEXT "Boiler frost protection switch-on temperature"
#define STR2522_TEXT "Boiler frost protection switch-off temperature"
#define STR2730_TEXT "Measured value of ionization current"
#define STR3810_TEXT "Temp differential on solar"
#define STR3811_TEXT "Temp differential off solar"
#define STR3812_TEXT "Charging temp min"
#define STR3831_TEXT "Min running time of collector pump"
#define STR3840_TEXT "Collector frost protection temp"
#define STR3850_TEXT "Collector overtemperature protection"
#define STR3860_TEXT "Evaporation temperature of heat carrier"
#define STR4721_TEXT "Automatic producer lock switching differential"
#define STR4722_TEXT "Diff. Buffer/HC temp to producer release"
#define STR5019_TEXT "Setpoint boost for recharging of stratific. Tank"
#define STR5020_TEXT "Flow temp boost dhw"
#define STR5050_TEXT "Max dhw charging temp"
#define STR5055_TEXT "Min recooling temperature for DHW storage tank"
#define STR5100_TEXT "Min. pump speed for full charging of strat. tank"
#define STR5020_TEXT "Flow temp boost dhw"
#define STR5400_TEXT "Setpoint for readiness temperature"
#define STR5430_TEXT "Switch-on differential in DHW mode (sensor 1)"
#define STR5431_TEXT "Min. switch-off differ. in DHW mode (sensor 1)"
#define STR5432_TEXT "Max. switch-off differ. In DHW mode (sensor 1)"
#define STR5433_TEXT "Switch-on differential in DHW mode (sensor 2)"
#define STR5434_TEXT "Min. switch-off differential in DHW mode (sens2)"
#define STR5435_TEXT "Max. switch-off difer. in DHW mode (sensor 2)"
#define STR5450_TEXT "Response treshold for detection of DHW consumpt."
#define STR5451_TEXT "Resp. treshold for DHW consumpt. in comfort mode"
#define STR5452_TEXT "Resp. treshold for DHW consumpt. in heating mode"
#define STR5453_TEXT "Setpoint readjustment at 40°C in comfort mode"
#define STR5454_TEXT "Setpoint readjustment at 60°C in comfort mode"
#define STR5455_TEXT "Setpoint readjustment at 40°C outlet temperature"
#define STR5456_TEXT "Setpoint readjustment at 60°C outlet temperature"
#define STR5480_TEXT "Time for inst. DHW comfort after consumption"
#define STR5481_TEXT "Time for inst. DHW comf. after consumpt. (heat)"
#define STR5482_TEXT "Time DHW flow switch is closed"
#define STR5483_TEXT "Time DHW Comfort flow switch is closed"
#define STR5486_TEXT "Controller delay at instant. DHW chopping mode"
#define STR5487_TEXT "pump overrrun in DHW comfort after burner off"
#define STR5488_TEXT "pump overrrun in DHW comfort after burner off"
#define STR5701_TEXT "Plant type"
#define STR5710_TEXT "Heating circuit 1"
#define STR5715_TEXT "Heating circuit 2"
#define STR5732_TEXT "Pump-off time at change from heating to DHW mode"
#define STR5733_TEXT "Pump-off delay at change from heating to DHW"
#define STR5761_TEXT "Heat demand with assistance by pump Q8"
#define STR5920_TEXT "Function programmable output K2 LMU"
#define STR5921_TEXT "Default K2 on K1"
#define STR5922_TEXT "Function output 1 clip-in function module"
#define STR5923_TEXT "Function output 2 clip-in function module"
#define STR5924_TEXT "Function output 3 clip-in function module"
#define STR5926_TEXT "Configuration output 1"
#define STR5927_TEXT "Configuration output 2"
#define STR5928_TEXT "Configuration output 3"
#define STR5950_TEXT "Input H1 function selection"
#define STR5957_TEXT "Modem function"
#define STR5970_TEXT "Config room thermostat 1"
#define STR5971_TEXT "Config room thermostat 2"
#define STR5973_TEXT "Function Input RelCl"
#define STR5975_TEXT "Maximum temperature of external heat demand"
#define STR5976_TEXT "Lower Limit of input signal for ext. heat demand"
#define STR6110_TEXT "Building time constant"
#define STR6112_TEXT "Gradient room model"
#define STR6120_TEXT "Frost protection for the plant"
#define STR6127_TEXT "Time for kick function of pump / diverting valve"
#define STR6220_TEXT "Device SW version"
#define STR6225_TEXT "Device family"
#define STR6226_TEXT "Device variant"
#define STR6227_TEXT "Device OV version"
#define STR6230_TEXT "Controller setting flags 0"
#define STR6240_TEXT "Controller setting flags 1"
#define STR6250_TEXT "Controller setting flags 2"
#define STR6260_TEXT "Controller setting flags 3"
#define STR6270_TEXT "Controller setting flags 4"
#define STR6300_TEXT "Controller setting flags 7"
#define STR6330_TEXT "Controller configuration 10"
#define STR6604_TEXT "LPB power supply function selection"
#define STR6605_TEXT "LPB power supply status"
#define STR6625_TEXT "Dhw allocation"
#define STR6640_TEXT "Clock time source"
#define STR6705_TEXT "Internal value of diagnostic code"
#define STR6706_TEXT "Current value of lockout phase"
#define STR6741_TEXT "Time flow temperature alarm heating circuit 2"
#define STR6823_TEXT "3rd past value of albatros diagnostic code"
#define STR6825_TEXT "3rd past value of internal diagnostic code"
#define STR6826_TEXT "3rd past value of lockout phase"
#define STR6830_TEXT "4th past value of lockout code counter"
#define STR6833_TEXT "4th past value of albatros diagnostic code"
#define STR6835_TEXT "4th past value of internal diagnostic code"
#define STR6836_TEXT "4th past value of lockout phase"
#define STR6840_TEXT "5th past value of lockout code counter"
#define STR6843_TEXT "5th past value of albatros diagnostic code"
#define STR6845_TEXT "5th past value of internal diagnostic code"
#define STR6846_TEXT "5th past value of lockout phase"
#define STR7001_TEXT "Maintenance message"
#define STR7007_TEXT "Configuration / Reset of service messages"
#define STR7010_TEXT "Confirmation of service message"
#define STR7011_TEXT "Repetition time for service messages"
#define STR7040_TEXT "Burner maintenance interval"
#define STR7041_TEXT "Hours run since last service"
#define STR7042_TEXT "Limit of burner starts since last service"
#define STR7043_TEXT "Burner starts since last service"
#define STR7044_TEXT "Limit of months since last service"
#define STR7045_TEXT "Months since last service"
#define STR7050_TEXT "Fan speed treshold for service message"
#define STR7051_TEXT "Ionisation current service message"
#define STR8000_TEXT "Status heating circuit 1"
#define STR8001_TEXT "Status heating circuit 2"
#define STR8003_TEXT "Status DHW"
#define STR8005_TEXT "Status boiler"
#define STR8007_TEXT "Status solar"
#define STR8300_TEXT "1. Appliance burner stage T2"
#define STR8301_TEXT "2. Appliance burner stage T8"
#define STR8302_TEXT "Condition burner flap open"
#define STR8303_TEXT "Condition burner flap closed"
#define STR8304_TEXT "Boiler pump Q1"
#define STR8308_TEXT "Boiler pump speed"
#define STR8310_TEXT "Boiler temp actual value"
#define STR8311_TEXT "Boiler temp setpoint"
#define STR8312_TEXT "Boiler switching point"
#define STR8313_TEXT "Regulation sensor"
#define STR8314_TEXT "Return temp actual value"
#define STR8315_TEXT "Boiler return flow temperature setpoint"
#define STR8316_TEXT "Flue gas temp actual value"
#define STR8318_TEXT "Exhaust temperature max"
#define STR8319_TEXT "Control temperature"
#define STR8320_TEXT "Control setpoint"
#define STR8321_TEXT "Actual control deviation"
#define STR8323_TEXT "Fan speed"
#define STR8324_TEXT "Current fan speed"
#define STR8325_TEXT "Current fan control"
#define STR8326_TEXT "Relative output"
#define STR8327_TEXT "Water pressure"
#define STR8328_TEXT "Operation indication burner control"
#define STR8330_TEXT "Operating hours 1. Level"
#define STR8331_TEXT "Startcount 1. Level"
#define STR8332_TEXT "Operating hours 2. Level"
#define STR8333_TEXT "Startcount 2. Level"
#define STR8336_TEXT "Device operating hours"
#define STR8337_TEXT "Start counter burner"
#define STR8338_TEXT "Hours run burner"
#define STR8339_TEXT "Hours run DHW heating"
#define STR8340_TEXT "Hours run zone"
#define STR8378_TEXT "Total gas energy heating mode"
#define STR8379_TEXT "Total gas energy DHW"
#define STR8380_TEXT "Total gas energy"
#define STR8381_TEXT "Total gas energy heating reset"
#define STR8382_TEXT "Total gas energy DHW reset"
#define STR8383_TEXT "Gas energy"
#define STR8390_TEXT "Actual phase number"
#define STR8395_TEXT "Heat emission"
#define STR8396_TEXT "Heat absorption source"
#define STR8397_TEXT "Power consumption"
#define STR8398_TEXT "Performance coefficient"
#define STR8510_TEXT "Collector temp 1 actual value (B6)"
#define STR8530_TEXT "solar yield operating hours"
#define STR8700_TEXT "Outside temp sensor local"
#define STR8703_TEXT "Outside temp attenuated"
#define STR8704_TEXT "Outside temp composite"
#define STR8740_TEXT "Room temp 1 actual value"
#define STR8741_TEXT "Room temp setpoint current"
#define STR8743_TEXT "Flow temp actual value heat circuit 1"
#define STR8744_TEXT "Flow temperature setpoint H1"
#define STR8750_TEXT "Pump speed"
#define STR8770_TEXT "Room temp 2 actual value"
#define STR8771_TEXT "Room temp setpoint actual HC2"
#define STR8773_TEXT "Flow temp actual value heat circuit 2"
#define STR8774_TEXT "Flow temperature setpoint H2"
#define STR8830_TEXT "DHW temperature actual value top (B3)"
#define STR8831_TEXT "Dhw temp setpoint current"
#define STR8836_TEXT "DHW charging temperature"
#define STR8950_TEXT "Process signal segment flow"
#define STR8952_TEXT "Process signal segment return"
#define STR8980_TEXT "Buffer temp actual value top (B4)"
#define STR9500_TEXT "Pre-ventilation time"
#define STR9502_TEXT "Modulation Luft in Vorlüftung"
#define STR9504_TEXT "Required fan speed during prepurging"
#define STR9510_TEXT "Modulation air at ignition load"
#define STR9512_TEXT "Speed required at ignition load"
#define STR9520_TEXT "Modulation air at low-fire"
#define STR9522_TEXT "Modulation air at high-fire"
#define STR9524_TEXT "Speed required at low-fire"
#define STR9527_TEXT "Speed required at high-fire"
#define STR9540_TEXT "After-ventilation time"
#define STR9560_TEXT "Fan modulation for full charging of strat. tank"
#define STR9563_TEXT "Fan speed for full charging of stratific. tank"