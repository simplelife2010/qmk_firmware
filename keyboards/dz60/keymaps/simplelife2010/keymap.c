#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_60_ansi_wrapper(...) LAYOUT_60_ansi(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_60_ansi_wrapper(
        _ROW1_QWERTY_60PERCENT_,
        _ROW2_QWERTY_60PERCENT_,
        _ROW3_QWERTY_60PERCENT_,
        _ROW4_QWERTY_60PERCENT_,
        _ROW5_QWERTY_60PERCENT_3_4_MODS_1SPC_
    ),

    [_RAISE] = LAYOUT_60_ansi_wrapper(
        _ROW1_RAISE_60PERCENT_,
        _ROW2_RAISE_60PERCENT_,
        _ROW3_RAISE_60PERCENT_,
        _ROW4_RAISE_60PERCENT_,
        _ROW5_RAISE_60PERCENT_3_4_MODS_1SPC_
    ),

    [_ADJUST] = LAYOUT_60_ansi_wrapper(
        _ROW1_ADJUST_60PERCENT_,
        _ROW2_ADJUST_60PERCENT_,
        _ROW3_ADJUST_60PERCENT_,
        _ROW4_ADJUST_60PERCENT_,
        _ROW5_ADJUST_60PERCENT_3_4_MODS_1SPC_
    ),

    [_MOUSE] = LAYOUT_60_ansi_wrapper(
        _ROW1_MOUSE_60PERCENT_,
        _ROW2_MOUSE_60PERCENT_,
        _ROW3_MOUSE_60PERCENT_,
        _ROW4_MOUSE_60PERCENT_,
        _ROW5_MOUSE_60PERCENT_3_4_MODS_1SPC_
    )
};
