#pragma once

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 150

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
