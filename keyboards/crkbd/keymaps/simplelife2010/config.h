/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

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
