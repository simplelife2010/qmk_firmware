#pragma once
#include QMK_KEYBOARD_H

// Layers
enum userspace_layers {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _MOUSE
};

// Tap dances
enum {
    TD_ES_HY_M // Single tap: Escape, single hold: Hyper, double hold: Mouse layer
};

typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_HOLD
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

td_state_t cur_dance(qk_tap_dance_state_t *state);

void eshym_finished(qk_tap_dance_state_t *state, void *user_data);
void eshym_reset(qk_tap_dance_state_t *state, void *user_data);

#define HYPER_MODS (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LOPT) | MOD_BIT(KC_LGUI))
#define LOWER MO(_LOWER)
#define RSE_SPC LT(_RAISE, KC_SPC)
#define ADJUST MO(_ADJUST)
#define ES_HY_M TD(TD_ES_HY_M)

#define _VIM_NAV_KEYS_   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
#define _MOUSE_NAV_KEYS_ KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
#define _2_BLANKS_       _______, _______
#define _3_BLANKS_       _______, _______, _______
#define _4_BLANKS_       _______, _______, _______, _______
#define _5_BLANKS_       _______, _______, _______, _______, _______
#define _10_BLANKS_      _5_BLANKS_, _5_BLANKS_

#define _NUMBERS_          KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _SHIFTED_NUMBERS_  KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _F_KEYS_1_TO_10_   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _QWERTY1_          KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _QWERTY2_          KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _QWERTY3L_         KC_Z,    KC_X,    KC_C,    KC_V,   KC_B
#define _QWERTY3R_         KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH
#define _QWERTY3_          _QWERTY3L_, _QWERTY3R_
#define _LOWER_SYMBOLS_R2_ KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_DQUO, _5_BLANKS_
#define _RAISE_SYMBOLS_R2_ KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT, _VIM_NAV_KEYS_,  _______

#define _2_MODS_LEFT_                  KC_LCTL, KC_LCMD
#define _2_MODS_RIGHT_                 KC_RCMD, KC_ROPT
#define _3_MODS_LEFT_                  KC_LCTL, KC_LOPT, KC_LCMD
#define _3_MODS_RIGHT_                 KC_RCMD, KC_ROPT, KC_RCTL
#define _4_MODS_LEFT_                  KC_LCTL, ADJUST,  KC_LOPT, KC_LCMD
#define _4_MODS_RIGHT_                 KC_RCMD, KC_ROPT, ADJUST,  KC_RCTL
#define _DOUBLE_SPACEBAR_LOWER_RAISE_  LOWER,   RSE_SPC
#define _DOUBLE_SPACEBAR_ADJUST_LEFT_  ADJUST,  _______
#define _DOUBLE_SPACEBAR_ADJUST_RIGHT_ _______, ADJUST
#define _DOUBLE_SPACEBAR_BTN1_RIGHT_   _______, KC_BTN1

#define _ROW1_QWERTY_40PERCENT_                KC_TAB,        _QWERTY1_,                      KC_BSPC
#define _ROW1_QWERTY_40PERCENT_ESC_SPLIT_BSPC_ ES_HY_M,       _QWERTY1_,                      KC_DEL, KC_BSPC
#define _ROW2_QWERTY_40PERCENT_                ES_HY_M,       _QWERTY2_,                      KC_ENT
#define _ROW2_QWERTY_40PERCENT_TAB             KC_TAB,        _QWERTY2_,                      KC_ENT
#define _ROW3_QWERTY_40PERCENT_                KC_LSFT,       _QWERTY3_,                      KC_RSFT
#define _ROW3_QWERTY_40PERCENT_DOUBLE_B        KC_LSFT,       _QWERTY3L_, ADJUST, _QWERTY3R_, KC_RSFT
#define _ROW4_QWERTY_40PERCENT_4MODS_2SPC_     _4_MODS_LEFT_, _DOUBLE_SPACEBAR_LOWER_RAISE_, _4_MODS_RIGHT_
#define _ROW4_QWERTY_40PERCENT_3MODS_2SPC_     _3_MODS_LEFT_, _DOUBLE_SPACEBAR_LOWER_RAISE_, _3_MODS_RIGHT_
#define _ROW4_QWERTY_40PERCENT_2MODS_2SPC_     _2_MODS_LEFT_, _DOUBLE_SPACEBAR_LOWER_RAISE_, _2_MODS_RIGHT_

#define _ROW1_LOWER_40PERCENT_                _______,    _SHIFTED_NUMBERS_,               _______
#define _ROW1_LOWER_40PERCENT_ESC_SPLIT_BSPC_ _______,    _SHIFTED_NUMBERS_,               _______, _______
#define _ROW2_LOWER_40PERCENT_                _______,    _LOWER_SYMBOLS_R2_,              KC_PIPE
#define _ROW3_LOWER_40PERCENT_                _______,    _10_BLANKS_,                     _______
#define _ROW3_LOWER_40PERCENT_DOUBLE_B        _______,    _5_BLANKS_, _______, _5_BLANKS_, _______
#define _ROW4_LOWER_40PERCENT_4MODS_2SPC_     _4_BLANKS_, _DOUBLE_SPACEBAR_ADJUST_RIGHT_,  _4_BLANKS_
#define _ROW4_LOWER_40PERCENT_3MODS_2SPC_     _3_BLANKS_, _DOUBLE_SPACEBAR_ADJUST_RIGHT_,  _3_BLANKS_
#define _ROW4_LOWER_40PERCENT_2MODS_2SPC_     _2_BLANKS_, _DOUBLE_SPACEBAR_ADJUST_RIGHT_,  _2_BLANKS_

#define _ROW1_RAISE_40PERCENT_                _______,    _NUMBERS_,                       _______
#define _ROW1_RAISE_40PERCENT_ESC_SPLIT_BSPC_ _______,    _NUMBERS_,                       _______, _______
#define _ROW2_RAISE_40PERCENT_                _______,    _RAISE_SYMBOLS_R2_,              KC_BSLS
#define _ROW3_RAISE_40PERCENT_                _______,    _10_BLANKS_,                     _______
#define _ROW3_RAISE_40PERCENT_DOUBLE_B        _______,    _5_BLANKS_, _______, _5_BLANKS_, _______
#define _ROW4_RAISE_40PERCENT_4MODS_2SPC_     _4_BLANKS_, _DOUBLE_SPACEBAR_ADJUST_LEFT_,   _4_BLANKS_
#define _ROW4_RAISE_40PERCENT_3MODS_2SPC_     _3_BLANKS_, _DOUBLE_SPACEBAR_ADJUST_LEFT_,   _3_BLANKS_
#define _ROW4_RAISE_40PERCENT_2MODS_2SPC_     _2_BLANKS_, _DOUBLE_SPACEBAR_ADJUST_LEFT_,   _2_BLANKS_

#define _ROW1_ADJUST_40PERCENT_                RESET,      _F_KEYS_1_TO_10_, KC_F11
#define _ROW1_ADJUST_40PERCENT_ESC_SPLIT_BSPC_ RESET,      _F_KEYS_1_TO_10_, KC_F11, KC_F12
#define _ROW2_ADJUST_40PERCENT_                _______,    _10_BLANKS_,      _______
#define _ROW3_ADJUST_40PERCENT_                _______,    _10_BLANKS_,      _______
#define _ROW3_ADJUST_40PERCENT_DOUBLE_B        _______,    _5_BLANKS_, _______, _5_BLANKS_, _______
#define _ROW4_ADJUST_40PERCENT_4MODS_2SPC_     _4_BLANKS_, _______, _______, _4_BLANKS_
#define _ROW4_ADJUST_40PERCENT_3MODS_2SPC_     _3_BLANKS_, _______, _______, _3_BLANKS_
#define _ROW4_ADJUST_40PERCENT_2MODS_2SPC_     _2_BLANKS_, _______, _______, _2_BLANKS_
                                                   
#define _ROW1_MOUSE_40PERCENT_                _______,    _10_BLANKS_, _______
#define _ROW1_MOUSE_40PERCENT_ESC_SPLIT_BSPC_ _______,    _10_BLANKS_, _______, _______
#define _ROW2_MOUSE_40PERCENT_                _______,    _5_BLANKS_, _MOUSE_NAV_KEYS_, KC_BTN2,   _______
#define _ROW3_MOUSE_40PERCENT_                _______,    _10_BLANKS_, _______
#define _ROW3_MOUSE_40PERCENT_DOUBLE_B        _______,    _5_BLANKS_, _______, _5_BLANKS_, _______
#define _ROW4_MOUSE_40PERCENT_4MODS_2SPC_     _4_BLANKS_, _DOUBLE_SPACEBAR_BTN1_RIGHT_, _4_BLANKS_
#define _ROW4_MOUSE_40PERCENT_3MODS_2SPC_     _3_BLANKS_, _DOUBLE_SPACEBAR_BTN1_RIGHT_, _3_BLANKS_
#define _ROW4_MOUSE_40PERCENT_2MODS_2SPC_     _2_BLANKS_, _DOUBLE_SPACEBAR_BTN1_RIGHT_, _2_BLANKS_

#define _ROW1_QWERTY_60PERCENT_               KC_GRV,  _NUMBERS_, KC_MINS, KC_EQL,  KC_BSPC
#define _ROW2_QWERTY_60PERCENT_               KC_TAB,  _QWERTY1_, KC_LBRC, KC_RBRC, KC_BSLS
#define _ROW3_QWERTY_60PERCENT_               ES_HY_M, _QWERTY2_, KC_QUOT, KC_ENT
#define _ROW4_QWERTY_60PERCENT_               KC_LSFT, _QWERTY3_, KC_RSFT
#define _ROW5_QWERTY_60PERCENT_3_4_MODS_1SPC_ _3_MODS_LEFT_, RSE_SPC, _4_MODS_RIGHT_

#define _ROW1_RAISE_60PERCENT_               _______, _10_BLANKS_, _3_BLANKS_
#define _ROW2_RAISE_60PERCENT_               _______, _10_BLANKS_, _3_BLANKS_
#define _ROW3_RAISE_60PERCENT_               _______, _5_BLANKS_,  _VIM_NAV_KEYS_, _3_BLANKS_
#define _ROW4_RAISE_60PERCENT_               _______, _10_BLANKS_, _______
#define _ROW5_RAISE_60PERCENT_3_4_MODS_1SPC_ _3_BLANKS_, _______, _4_BLANKS_

#define _ROW1_ADJUST_60PERCENT_               RESET,   _F_KEYS_1_TO_10_, KC_F11, KC_F12, KC_F13
#define _ROW2_ADJUST_60PERCENT_               _______, _10_BLANKS_, _3_BLANKS_
#define _ROW3_ADJUST_60PERCENT_               _______, _5_BLANKS_,  _4_BLANKS_, _3_BLANKS_
#define _ROW4_ADJUST_60PERCENT_               _______, _10_BLANKS_, _______
#define _ROW5_ADJUST_60PERCENT_3_4_MODS_1SPC_ _3_BLANKS_, _______, _4_BLANKS_

#define _ROW1_MOUSE_60PERCENT_               _______,    _10_BLANKS_, _3_BLANKS_
#define _ROW2_MOUSE_60PERCENT_               _______,    _10_BLANKS_, _3_BLANKS_
#define _ROW3_MOUSE_60PERCENT_               _______,    _5_BLANKS_,  _MOUSE_NAV_KEYS_, KC_BTN2, _2_BLANKS_
#define _ROW4_MOUSE_60PERCENT_               _______,    _10_BLANKS_, _______
#define _ROW5_MOUSE_60PERCENT_3_4_MODS_1SPC_ _3_BLANKS_, KC_BTN1,     _4_BLANKS_
