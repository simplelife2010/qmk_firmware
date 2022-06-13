#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_wrapper(...) LAYOUT_all(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wrapper(
        _QWERTY_FKEYS_17_,
        _QWERTY_NUMBERS_17_IRON180_,
        _QWERTY_ALPHAS1_17_,
        _QWERTY_ALPHAS2_13_IRON180_,
        _QWERTY_ALPHAS3_13_IRON180_,
	_QWERTY_BTM_3_4_MODS_1SPC_3CUR_
    ),

    [_ADJUST] = LAYOUT_wrapper(
        _ADJUST_FKEYS_17_,
        _ADJUST_NUMBERS_17_IRON180_,
        _ADJUST_ALPHAS1_17_,
        _ADJUST_ALPHAS2_13_IRON180_,
        _ADJUST_ALPHAS3_13_IRON180_,
        _ADJUST_BTM_3_4_MODS_1SPC_3CUR_
    )
};
