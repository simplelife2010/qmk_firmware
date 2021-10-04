#pragma once

#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

// #ifdef MOUSEKEY_ENABLE
//     #define MOUSEKEY_DELAY             0
//     #define MOUSEKEY_INTERVAL          20
//     #define MOUSEKEY_MOVE_DELTA        5
//     #define MOUSEKEY_MAX_SPEED         10
//     #define MOUSEKEY_TIME_TO_MAX       20
// #endif

#ifdef MOUSEKEY_ENABLE
    #define MK_KINETIC_SPEED
    #define MOUSEKEY_DELAY                          8
    #define MOUSEKEY_INTERVAL                       8
    #define MOUSEKEY_MOVE_DELTA                     50
    #define MOUSEKEY_INITIAL_SPEED                  100
    #define MOUSEKEY_BASE_SPEED                     4000
    #define MOUSEKEY_DECELERATED_SPEED              400
    #define MOUSEKEY_ACCELERATED_SPEED              5000
    #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS        16
    #define MOUSEKEY_WHEEL_BASE_MOVEMENTS           32
    #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS    48
    #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS    8
#endif
