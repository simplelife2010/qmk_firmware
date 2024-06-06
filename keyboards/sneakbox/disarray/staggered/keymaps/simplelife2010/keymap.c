#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_bsp2u( \
	K000, \
        K100, K001,  K002, K003, K004, K005, K006, K007, K008, K009, K010, K011,  K012, K013,        K114, \
        K200, K101,  K102, K103, K104, K105, K106, K107, K108, K109, K110, K111,  K112,       K113,  K214, \
        K201, K202,  K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,              K213,  K314, \
        K300,        K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,        K312, K313,  K414, \
        K401, K402,  K403,             K405,                         K408,        K410, K411, K412,  K413  \
) LAYOUT( \
	K000, \
        K100, K001,  K002, K003, K004, K005, K006, K007, K008, K009, K010, K011,  K012, K013, KC_NO, K114, \
        K200, K101,  K102, K103, K104, K105, K106, K107, K108, K109, K110, K111,  K112,       K113,  K214, \
        K201, K202,  K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,              K213,  K314, \
        K300, KC_NO, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,        K312, K313,  K414, \
         K401, K402, K403, KC_NO,      K405,             KC_NO,      K408, KC_NO, K410, K411, K412,  K413  \
)

#define LAYOUT_bsp2u_wrapper(...) LAYOUT_bsp2u(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_bsp2u_wrapper(
        KC_MUTE,
        _QWERTY_NUMBERS_15_,
        _QWERTY_ALPHAS1_15_,
	_QWERTY_ALPHAS2_14_,
	_QWERTY_ALPHAS3_14_,
	_QWERTY_BTM_3_2_MODS_1SPC_3CUR_
    ),

    [_ADJUST] = LAYOUT_bsp2u_wrapper(
        _______,
        _ADJUST_NUMBERS_15_,
        _ADJUST_ALPHAS1_15_,
	_ADJUST_ALPHAS2_14_,
	_ADJUST_ALPHAS3_14_,
	_ADJUST_BTM_3_2_MODS_1SPC_3CUR_
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLD);
    } else {
        tap_code(KC_VOLU);
    }
    return true;
}
