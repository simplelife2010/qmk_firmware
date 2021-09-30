#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_planck_2x2u_wrapper(...) LAYOUT_planck_2x2u(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_2x2u_wrapper(
        _ROW1_QWERTY_40PERCENT_,
        _ROW2_QWERTY_40PERCENT_,
        _ROW3_QWERTY_40PERCENT_,
        _ROW4_QWERTY_40PERCENT_4MODS_2SPC_ 
    ),

    [_LOWER] = LAYOUT_planck_2x2u_wrapper(
        _ROW1_LOWER_40PERCENT_,
        _ROW2_LOWER_40PERCENT_,
        _ROW3_LOWER_40PERCENT_,
        _ROW4_LOWER_40PERCENT_4MODS_2SPC_ 
    ),

    [_RAISE] = LAYOUT_planck_2x2u_wrapper(
        _ROW1_RAISE_40PERCENT_,
        _ROW2_RAISE_40PERCENT_,
        _ROW3_RAISE_40PERCENT_,
        _ROW4_RAISE_40PERCENT_4MODS_2SPC_ 
    ),

    [_ADJUST] = LAYOUT_planck_2x2u_wrapper(
        _ROW1_ADJUST_40PERCENT_,
        _ROW2_ADJUST_40PERCENT_,
        _ROW3_ADJUST_40PERCENT_,
        _ROW4_ADJUST_40PERCENT_4MODS_2SPC_ 
    ),

    [_MOUSE] = LAYOUT_planck_2x2u_wrapper(
        _ROW1_MOUSE_40PERCENT_,
        _ROW2_MOUSE_40PERCENT_,
        _ROW3_MOUSE_40PERCENT_,
        _ROW4_MOUSE_40PERCENT_4MODS_2SPC_ 
    )
};
