#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_planck_2x2u_wrapper(...) LAYOUT_planck_2x2u(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_2x2u_wrapper(
        _QWERTY_ALPHAS1_12_,
        _QWERTY_ALPHAS2_12_,
        _QWERTY_ALPHAS3_12_,
        _QWERTY_ROW4_40PERCENT_4MODS_2SPC_ 
    ),

    [_LOWER] = LAYOUT_planck_2x2u_wrapper(
        _LOWER_ALPHAS1_12_,
        _LOWER_ALPHAS2_12_,
        _LOWER_ALPHAS3_12_,
        _LOWER_ROW4_40PERCENT_4MODS_2SPC_ 
    ),

    [_RAISE] = LAYOUT_planck_2x2u_wrapper(
        _RAISE_ALPHAS1_12_,
        _RAISE_ALPHAS2_12_,
        _RAISE_ALPHAS3_12_,
        _RAISE_ROW4_40PERCENT_4MODS_2SPC_ 
    ),

    [_ADJUST] = LAYOUT_planck_2x2u_wrapper(
        _ADJUST_ALPHAS1_12_,
        _ADJUST_ALPHAS2_12_,
        _ADJUST_ALPHAS3_12_,
        _ADJUST_ROW4_40PERCENT_4MODS_2SPC_ 
    ),

    [_MOUSE] = LAYOUT_planck_2x2u_wrapper(
        _MOUSE_ALPHAS1_12_,
        _MOUSE_ALPHAS2_12_,
        _MOUSE_ALPHAS3_12_,
        _MOUSE_ROW4_40PERCENT_4MODS_2SPC_ 
    )
};
