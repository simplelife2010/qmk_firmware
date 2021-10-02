#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_60_ansi_wrapper(...) LAYOUT_60_ansi(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_60_ansi_wrapper(
        _QWERTY_NUMBERS_14_,
        _QWERTY_ALPHAS1_14_,
        _QWERTY_ALPHAS2_13_,
        _QWERTY_ALPHAS3_12_,
        _QWERTY_BTM_3_4_MODS_1SPC_
    ),

    [_RAISE] = LAYOUT_60_ansi_wrapper(
        _RAISE_NUMBERS_14_,
        _RAISE_ALPHAS1_14_,
        _RAISE_ALPHAS2_13_,
        _RAISE_ALPHAS3_12_,
        _RAISE_BTM_3_4_MODS_1SPC_
    ),

    [_ADJUST] = LAYOUT_60_ansi_wrapper(
        _ADJUST_NUMBERS_14_,
        _ADJUST_ALPHAS1_14_,
        _ADJUST_ALPHAS2_13_,
        _ADJUST_ALPHAS3_12_,
        _ADJUST_BTM_3_4_MODS_1SPC_
    ),

    [_MOUSE] = LAYOUT_60_ansi_wrapper(
        _MOUSE_NUMBERS_14_,
        _MOUSE_ALPHAS1_14_,
        _MOUSE_ALPHAS2_13_,
        _MOUSE_ALPHAS3_12_,
        _MOUSE_BTM_3_4_MODS_1SPC_
    )
};
