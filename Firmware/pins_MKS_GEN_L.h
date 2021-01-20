/*****************************************************************
* MKS GEN Pin Assignments
******************************************************************/

#define ELECTRONICS "MKS_GEN_L"

#define KNOWN_BOARD
#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega 2560 or Rambo' selected from the 'Tools -> Boards' menu.
#endif

#define PINDA_THERMISTOR

#define SWI2C_SDA      20 //SDA on P3
#define SWI2C_SCL      21 //SCL on P3

#ifdef MICROMETER_LOGGING
#define D_DATACLOCK		24	//Y_MAX (green)
#define D_DATA			30	//X_MAX (blue)
#define D_REQUIRE		23	//Z_MAX (white)
#endif //MICROMETER_LOGGING



#define X_STEP_PIN             54
#define X_DIR_PIN              55
#define X_MIN_PIN              3
#define X_MAX_PIN              -1 // 2 on board 
#define X_ENABLE_PIN           38
//#define X_MS1_PIN              40
//#define X_MS2_PIN              41

#define Y_STEP_PIN             60
#define Y_DIR_PIN              61
#define Y_MIN_PIN              14
#define Y_MAX_PIN              -1 // 15 on board
#define Y_ENABLE_PIN           28
//#define Y_MS1_PIN              69
//#define Y_MS2_PIN              39

#define Z_STEP_PIN             46
#define Z_DIR_PIN              48
#define Z_MIN_PIN              18
#define Z_MAX_PIN              19
#define Z_ENABLE_PIN           62
//#define Z_MS1_PIN              68
//#define Z_MS2_PIN              67

#define HEATER_BED_PIN          8
#define TEMP_BED_PIN            14 // TODO: find if its 13 or 15

#define HEATER_0_PIN            10
#define TEMP_0_PIN              13  // Think this is right

#define HEATER_1_PIN           -1
#define TEMP_1_PIN             -1 

#define HEATER_2_PIN           -1
#define TEMP_2_PIN             -1

#define TEMP_AMBIENT_PIN       -1

#define TEMP_PINDA_PIN          1



#define E0_STEP_PIN            26
#define E0_DIR_PIN             28
#define E0_ENABLE_PIN          24
//#define E0_MS1_PIN             65
//#define E0_MS2_PIN             66

#ifdef SNMM 
  #define E_MUX0_PIN 17
  #define E_MUX1_PIN 16
#endif

    #define MOTOR_CURRENT_PWM_XY_PIN 46
    #define MOTOR_CURRENT_PWM_Z_PIN  45
    #define MOTOR_CURRENT_PWM_E_PIN  44
#define SDPOWER             -1
#define SDSS                53  
#define LED_PIN             13  // MK2S firmware port doesn't know what this is
#define FAN_PIN              9  // TODO: find where the other fan pin is set, since the second one isnt set
#define FAN_1_PIN           -1
#define PS_ON_PIN           -1
#define KILL_PIN            -1  // Pretty sure this is essientially reset, MK2 firmware has it set to 
#define SUICIDE_PIN         -1  // PIN that has to be turned on right after start, to keep power flowing.
#define TACH_0				30	// noctua extruder fan TODO: Find a pin for this


//#define KILL_PIN            32


#define BEEPER              37  // Beeper on AUX-4
#define LCD_PINS_RS         16
#define LCD_PINS_ENABLE     17
#define LCD_PINS_D4	        23
#define LCD_PINS_D5         25
#define LCD_PINS_D6         27
#define LCD_PINS_D7         29

//buttons are directly attached using AUX-2
#define BTN_EN1                33
#define BTN_EN2                31
#define BTN_ENC                35  // the click

#define SDCARDDETECT           49

#define IR_SENSOR_PIN 20 //idler sensor

// Support for an 8 bit logic analyzer, for example the Saleae.
// Channels 0-2 are fast, they could generate 2.667Mhz waveform with a software loop.
#define LOGIC_ANALYZER_CH0		X_MIN_PIN		// PB6
#define LOGIC_ANALYZER_CH1		Y_MIN_PIN		// PB5
#define LOGIC_ANALYZER_CH2		53				// PB0 (PROC_nCS)
// Channels 3-7 are slow, they could generate
// 0.889Mhz waveform with a software loop and interrupt locking,
// 1.333MHz waveform without interrupt locking.
#define LOGIC_ANALYZER_CH3 		73				// PJ3
// PK0 has no Arduino digital pin assigned, so we set it directly.
#define WRITE_LOGIC_ANALYZER_CH4(value) if (value) PORTK |= (1 << 0); else PORTK &= ~(1 << 0) // PK0
#define LOGIC_ANALYZER_CH5		16				// PH0 (RXD2)
#define LOGIC_ANALYZER_CH6		17				// PH1 (TXD2)
#define LOGIC_ANALYZER_CH7 		76				// PJ5

#define LOGIC_ANALYZER_CH0_ENABLE SET_OUTPUT(LOGIC_ANALYZER_CH0)
#define LOGIC_ANALYZER_CH1_ENABLE SET_OUTPUT(LOGIC_ANALYZER_CH1)
#define LOGIC_ANALYZER_CH2_ENABLE SET_OUTPUT(LOGIC_ANALYZER_CH2)
#define LOGIC_ANALYZER_CH3_ENABLE SET_OUTPUT(LOGIC_ANALYZER_CH3)
#define LOGIC_ANALYZER_CH4_ENABLE do { DDRK |= 1 << 0; } while (0)
#define LOGIC_ANALYZER_CH5_ENABLE do { cbi(UCSR2B, TXEN2); cbi(UCSR2B, RXEN2); cbi(UCSR2B, RXCIE2); SET_OUTPUT(LOGIC_ANALYZER_CH5); } while (0)
#define LOGIC_ANALYZER_CH6_ENABLE do { cbi(UCSR2B, TXEN2); cbi(UCSR2B, RXEN2); cbi(UCSR2B, RXCIE2); SET_OUTPUT(LOGIC_ANALYZER_CH6); } while (0)
#define LOGIC_ANALYZER_CH7_ENABLE SET_OUTPUT(LOGIC_ANALYZER_CH7)

