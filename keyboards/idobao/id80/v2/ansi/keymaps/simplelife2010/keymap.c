#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wrapper(
        _QWERTY_FKEYS_15_,
        _QWERTY_NUMBERS_15_,
        _QWERTY_ALPHAS1_15_,
        _QWERTY_ALPHAS2_13_,
        _QWERTY_ALPHAS3_13_,
	_QWERTY_BTM_3_2_MODS_1SPC_3CUR_
    ),

    [_MOUSE] = LAYOUT_wrapper(
        _MOUSE_FKEYS_15_,
        _MOUSE_NUMBERS_15_,
        _MOUSE_ALPHAS1_15_,
        _MOUSE_ALPHAS2_13_,
        _MOUSE_ALPHAS3_13_,
        _MOUSE_BTM_3_2_MODS_1SPC_3CUR_
    )
};
