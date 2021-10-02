#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wrapper(
        _ROW1_QWERTY_80PERCENT_2_,
        _QWERTY_NUMBERS_15_,
        _ROW3_QWERTY_80PERCENT_1_,
        _ROW4_QWERTY_80PERCENT_,
        _ROW5_QWERTY_80PERCENT_1CUR_,
	_BTM_QWERTY_3_2_MODS_1SPC_3CUR_
    ),

    [_MOUSE] = LAYOUT_wrapper(
        _ROW1_MOUSE_80PERCENT_2_,
        _MOUSE_NUMBERS_15_,
        _ROW3_MOUSE_80PERCENT_1_,
        _ROW4_MOUSE_80PERCENT_,
        _ROW5_MOUSE_80PERCENT_1CUR_,
        _BTM_MOUSE_3_2_MODS_1SPC_3CUR_
    )
};
