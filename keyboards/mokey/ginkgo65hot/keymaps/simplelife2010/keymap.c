#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wrapper(
        _QWERTY_NUMBERS_15_GINKGO_,
        _QWERTY_ALPHAS1_15_GINKGO_,
        _QWERTY_ALPHAS2_14_,
        _QWERTY_ALPHAS3_14_,
        _QWERTY_BTM_3_2_MODS_1SPC_3CUR_
    ),

    [_ADJUST] = LAYOUT_wrapper(
        _ADJUST_NUMBERS_15_GINKGO_,
        _ADJUST_ALPHAS1_15_,
        _ADJUST_ALPHAS2_14_,
        _ADJUST_ALPHAS3_14_,
        _ADJUST_BTM_3_2_MODS_1SPC_3CUR_
    )
};
