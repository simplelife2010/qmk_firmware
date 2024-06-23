#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_all_wrapper(...) LAYOUT_all(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_all_wrapper(
        _QWERTY_ALPHAS1_12_,
        _QWERTY_ALPHAS2_11_WO_SCLN_,
        _QWERTY_ALPHAS3_12_WO_SLASH_,
        _QWERTY_BTM_3MODS_3SPC_
    ),

    [_LOWER] = LAYOUT_all_wrapper(
        _LOWER_ALPHAS1_12_,
        _LOWER_ALPHAS2_11_WO_SCLN_,
        _LOWER_ALPHAS3_12_WO_SLASH_,
        _LOWER_BTM_3MODS_3SPC_
    ),

    [_RAISE] = LAYOUT_all_wrapper(
        _RAISE_ALPHAS1_12_,
        _RAISE_ALPHAS2_11_WO_SCLN_,
        _RAISE_ALPHAS3_12_WO_SLASH_,
        _RAISE_BTM_3MODS_3SPC_
    ),

    [_ADJUST] = LAYOUT_all_wrapper(
        _ADJUST_ALPHAS1_12_,
        _ADJUST_ALPHAS2_11_WO_SCLN_,
        _ADJUST_ALPHAS3_12_WO_SLASH_,
        _ADJUST_BTM_3MODS_3SPC_
    )
};

