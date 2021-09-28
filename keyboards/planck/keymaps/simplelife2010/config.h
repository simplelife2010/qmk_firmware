#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

#ifdef MOUSEKEY_ENABLE
    #define MOUSEKEY_DELAY             0   // Dflt: 300, Delay btw. pressing a key and movement
    #define MOUSEKEY_INTERVAL          20  // Dflt: 50, Time between movements in milliseconds
    #define MOUSEKEY_MOVE_DELTA        5   // Dflt: 5, Step size
    #define MOUSEKEY_MAX_SPEED         10  // Dflt: 10, Max. speed at which acceleration stops
    #define MOUSEKEY_TIME_TO_MAX       20  // Dflt: 20, Time until max. speed is reached
    #define MOUSEKEY_WHEEL_DELAY       300 // Dflt: 300, Delay btw. keypress and wheel movement
    #define MOUSEKEY_WHEEL_INTERVAL    100 // Dflt: 100, Time between wheel movements
    #define MOUSEKEY_WHEEL_MAX_SPEED   8   // Dflt: 8, Max. number of scroll steps per action
    #define MOUSEKEY_WHEEL_TIME_TO_MAX 40  // Dflt: 40, Time until max. scroll speed reached
#endif
