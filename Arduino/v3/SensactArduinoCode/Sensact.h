// --------------------------------------
// Sensors.h
// --------------------------------------
#ifndef SENSACT_H
#define SENSACT_H
#include <Arduino.h>

// timeDiff function.  Defined in Actions.cpp
unsigned int timeDiff(unsigned int now, unsigned int prev);

// Various Constants used throughout the code //

// === Protocol Values === //
// -- Commands and Block Headers -- //
#define VERSION         "3.2"
#define REPORT_MODE       'Q'
#define RUN_SENSACT       'R'
#define START_OF_SENSOR_DATA 'S'
#define START_OF_TRIGGER_BLOCK 'T'
#define REQUEST_TRIGGERS  'U'
#define GET_VERSION       'V'
#define KEYBOARD_CMD      'W'
#define MIN_COMMAND  'Q'
#define MAX_COMMAND  'W'

// -- Data block separators -- //
#define TRIGGER_START  't'
#define TRIGGER_END    'z'
#define END_OF_BLOCK   'Z'

// -- Value encoding -- //
#define NUMBER_MASK 0x60
#define ID_MASK     0x40
#define CONDITION_MASK '0'
#define BOOL_TRUE   'p'
#define BOOL_FALSE  'q'

// === Timing Constants - all in ms === //
#define REPORTING_INTERVAL  200  // Interval between reports of signal levels
#define READING_INTERVAL     10  // Interval between reading signals in run mode
#define REFRACTORY          800  // Interval within which the output will not re-trigger. (unused in this version)
#define PULSE_WIDTH         500  // Output pulse width - for relays
#define DEFAULT_REPEAT_INTERVAL 250 // Repeat interval for most things.
#define MOUSE_REPEAT_INTERVAL   100 // Time between repeats of mouse move actions.

// === Special Action ID === //
// This action is actually performed in the trigger code.
#define CHANGE_SENSOR_STATE 10  // Must not conflict with any action state defined in Actions.cpp

// === LED Values === //
#define LED_RED    5
#define LED_GREEN  6
#define LED_BLUE   7

// === Sensor Pins === //
#define SENSACT_IN1A A0
#define SENSACT_IN1B A1
#define SENSACT_IN2A A2
#define SENSACT_IN2B A3
#define SENSACT_IN3A A4
#define SENSACT_IN3B A5

// === Action Pins === //
#define SENSACT_IR_OUT  9
#define SENSACT_BUZZER  10
#define SENSACT_RELAY_1 11
#define SENSACT_RELAY_2 12

// ==== Some Limits === //
#define MAX_TRIGGERS 20           // Maximum number of triggers allowed.
#define MAX_ACTIONS 10            // Maximum number of actions allowed per trigger check.
#define MAX_SENSORS 8
#define MAX_ACTORS  9

#endif
