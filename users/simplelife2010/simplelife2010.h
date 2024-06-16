#pragma once
#include QMK_KEYBOARD_H

// Layers
enum userspace_layers {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define LOWER MO(_LOWER)
#define RSE_SPC LT(_RAISE, KC_SPC)
#define ADJ_SPC LT(_ADJUST, KC_SPC)
#define ADJUST MO(_ADJUST)

#ifdef HOME_ROW_MODS
    #define CTL_A LCTL_T(KC_A)
    #define OPT_S LOPT_T(KC_S)
    #define CMD_D LCMD_T(KC_D)
    #define SFT_F LSFT_T(KC_F)
    #define SFT_J RSFT_T(KC_J)
    #define CMD_K RCMD_T(KC_K)
    #define OPT_L ROPT_T(KC_L)
    #define CTL_SCLN RCTL_T(KC_SCLN)
#endif

#define _VIM_NAV_KEYS_                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
#define _2_BLANKS_                         _______, _______
#define _3_BLANKS_                         _______, _______, _______
#define _4_BLANKS_                         _______, _______, _______, _______
#define _5_BLANKS_                         _______, _______, _______, _______, _______
#define _10_BLANKS_                        _5_BLANKS_, _5_BLANKS_
#define _12_BLANKS_                        _10_BLANKS_, _2_BLANKS_
#define _13_BLANKS_                        _12_BLANKS_, ________
#define _15_BLANKS_                        _12_BLANKS_, _3_BLANKS_

#define _NUMBERS_                          KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _SHIFTED_NUMBERS_                  KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _F_KEYS_1_TO_10_                   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define _F_KEYS_1_TO_12_                   _F_KEYS_1_TO_10_, KC_F11,  KC_F12
#define _F_KEYS_1_TO_13_                   _F_KEYS_1_TO_10_, KC_F11,  KC_F12, KC_F13
#define _QWERTY1L_                         KC_Q,    KC_W,    KC_E,    KC_R,   KC_T
#define _QWERTY1R_                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P
#define _QWERTY1_                          _QWERTY1L_, _QWERTY1R_
#ifdef HOME_ROW_MODS
    #define _QWERTY2L_                         CTL_A,   OPT_S,   CMD_D,   SFT_F,  KC_G
    #define _QWERTY2R_                         KC_H,    SFT_J,   CMD_K,   OPT_L,  CTL_SCLN
#else
    #define _QWERTY2L_                         KC_A,    KC_S,    KC_D,    KC_F,   KC_G
    #define _QWERTY2R_                         KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN
#endif
#define _QWERTY2_                          _QWERTY2L_, _QWERTY2R_
#define _QWERTY3L_                         KC_Z,    KC_X,    KC_C,    KC_V,   KC_B
#define _QWERTY3R_                         KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH
#define _QWERTY3_                          _QWERTY3L_, _QWERTY3R_
#define _LOWER_SYMBOLS_R2L_                KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_DQUO
#define _LOWER_SYMBOLS_R2R_                _5_BLANKS_
#define _LOWER_SYMBOLS_R2_                 _LOWER_SYMBOLS_R2L_, _LOWER_SYMBOLS_R2R_
#define _RAISE_SYMBOLS_R2L_                KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT
#define _RAISE_SYMBOLS_R2R_                _VIM_NAV_KEYS_,  _______
#define _RAISE_SYMBOLS_R2_                 _RAISE_SYMBOLS_R2L_, _RAISE_SYMBOLS_R2R_

#define _2_MODS_LEFT_                      KC_LCTL,  KC_LCMD
#define _2_MODS_RIGHT_                     KC_ROPT,  KC_RCTL
#define _3_MODS_LEFT_                      KC_LCTL,  KC_LOPT, KC_LCMD
#define _3_MODS_RIGHT_                     KC_RCMD,  KC_ROPT, KC_RCTL
#define _4_MODS_LEFT_                      KC_LCTL,  ADJUST,  KC_LOPT, KC_LCMD
#define _4_MODS_RIGHT_                     KC_RCMD,  KC_ROPT, ADJUST,  KC_RCTL
#define _DOUBLE_SPACEBAR_LOWER_RAISE_      LOWER,    RSE_SPC
#define _DOUBLE_SPACEBAR_ADJUST_LEFT_      ADJUST,   _______
#define _DOUBLE_SPACEBAR_ADJUST_RIGHT_     _______,  ADJUST
#define _DOUBLE_SPACEBAR_BTN1_RIGHT_       _______,  KC_BTN1
#define _TRIPLE_SPACEBAR_LWR_ADJ_RSE_      LOWER,    ADJUST,  RSE_SPC
#define _TRIPLE_SPACEBAR_ADJUST_LEFT_      ADJUST,   _______, _______
#define _TRIPLE_SPACEBAR_ADJUST_RIGHT_     _______,  _______, ADJUST
#define _TRIPLE_SPACEBAR_BTN1_RIGHT_       _______,  _______, KC_BTN1

#define _QWERTY_FKEYS_15_                  KC_ESC, _F_KEYS_1_TO_12_, KC_INS, KC_DEL
#define _QWERTY_FKEYS_17_                  KC_ESC, _F_KEYS_1_TO_13_, KC_PSCR, KC_SLCK, KC_PAUS
#define _QWERTY_NUMBERS_14_                KC_GRV,  _NUMBERS_, KC_MINS, KC_EQL,  KC_BSPC
#define _QWERTY_NUMBERS_14_SAMUEL_         KC_ESC,  _NUMBERS_, KC_MINS, KC_EQL,  KC_BSPC
#define _QWERTY_NUMBERS_15_                _QWERTY_NUMBERS_14_, KC_HOME
#define _QWERTY_NUMBERS_15_TA65_NOBSLS_    _QWERTY_NUMBERS_14_, KC_BSPC, KC_HOME
#define _QWERTY_NUMBERS_17_IRON180_        _QWERTY_NUMBERS_14_, KC_BSPC, KC_INS, KC_HOME, KC_PGUP
#define _QWERTY_ALPHAS1_12_                KC_TAB,          _QWERTY1_,                               KC_BSPC
#define _QWERTY_ALPHAS1_13_ESC_SPLIT_BSPC_ KC_ESC,          _QWERTY1_,                               KC_DEL, KC_BSPC
#define _QWERTY_ALPHAS1_14_                KC_TAB,  _QWERTY1_, KC_LBRC, KC_RBRC, KC_BSLS
#define _QWERTY_ALPHAS1_15_                _QWERTY_ALPHAS1_14_, KC_END
#define _QWERTY_ALPHAS1_17_                _QWERTY_ALPHAS1_14_, KC_DEL, KC_END, KC_PGDN
#define _QWERTY_ALPHAS2_11_WO_SCLN_        KC_ESC,          _QWERTY2_
#define _QWERTY_ALPHAS2_12_                KC_ESC,          _QWERTY2_,                               KC_ENT
#define _QWERTY_ALPHAS2_12_TAB_            KC_TAB,          _QWERTY2_,                               KC_ENT
#define _QWERTY_ALPHAS2_13_                KC_ESC,  _QWERTY2_, KC_QUOT, KC_ENT
#define _QWERTY_ALPHAS2_13_SAMUEL_         KC_CAPS, _QWERTY2_, KC_QUOT, KC_ENT
#define _QWERTY_ALPHAS2_13_IRON180_        KC_ESC,  _QWERTY2_, KC_QUOT, KC_NO, KC_ENT
#define _QWERTY_ALPHAS2_14_                _QWERTY_ALPHAS2_13_, KC_PGUP
#define _QWERTY_ALPHAS2_14_TA65_NOBSLS_    _QWERTY_ALPHAS2_13_, KC_ENT, KC_PGUP
#define _QWERTY_ALPHAS3_12_                KC_LSFT,         _QWERTY3_,                               KC_RSFT
#define _QWERTY_ALPHAS3_12_WO_SLASH_       KC_LSFT, ADJUST, _QWERTY3L_, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT
#define _QWERTY_ALPHAS3_13_DOUBLE_B_       KC_LSFT,         _QWERTY3L_, ADJUST, _QWERTY3R_,          KC_RSFT
#define _QWERTY_ALPHAS3_12_                KC_LSFT, _QWERTY3_, KC_RSFT
#define _QWERTY_ALPHAS3_13_                _QWERTY_ALPHAS3_12_, KC_UP
#define _QWERTY_ALPHAS3_13_IRON180_        KC_LSFT, KC_NO, _QWERTY3_, KC_RSFT, KC_NO, KC_UP
#define _QWERTY_ALPHAS3_14_                _QWERTY_ALPHAS3_12_, KC_UP, KC_PGDN
#define _QWERTY_ALPHAS3_14_TA65_NOBSLS_    KC_LSFT, _QWERTY_ALPHAS3_12_, KC_UP, KC_PGDN
#define _QWERTY_BTM_4MODS_2SPC_            _4_MODS_LEFT_, _DOUBLE_SPACEBAR_LOWER_RAISE_,        _4_MODS_RIGHT_
#define _QWERTY_BTM_3MODS_2SPC_            _3_MODS_LEFT_, _DOUBLE_SPACEBAR_LOWER_RAISE_,        _3_MODS_RIGHT_
#define _QWERTY_BTM_3MODS_3SPC_            _3_MODS_LEFT_, _TRIPLE_SPACEBAR_LWR_ADJ_RSE_, _3_MODS_RIGHT_
#define _QWERTY_BTM_2MODS_2SPC_            _2_MODS_LEFT_, _DOUBLE_SPACEBAR_LOWER_RAISE_,        _2_MODS_RIGHT_
#define _QWERTY_BTM_3_4_MODS_1SPC_         _3_MODS_LEFT_, KC_SPC, _4_MODS_RIGHT_
#define _QWERTY_BTM_3_4_MODS_1SPC_3CUR_    _3_MODS_LEFT_, ADJ_SPC, _4_MODS_RIGHT_, KC_LEFT, KC_DOWN, KC_RGHT
#define _QWERTY_BTM_3_2_MODS_1SPC_3CUR_    _3_MODS_LEFT_, ADJ_SPC, _2_MODS_RIGHT_, KC_LEFT, KC_DOWN, KC_RGHT
#define _QWERTY_BTM_TA65_NOFN_             _3_MODS_LEFT_, ADJ_SPC, _2_MODS_RIGHT_, _______, KC_LEFT, KC_DOWN, KC_RGHT

#define _LOWER_ALPHAS1_12_                 KC_TILD,    _SHIFTED_NUMBERS_,               _______
#define _LOWER_ALPHAS1_13_ESC_SPLIT_BSPC_  KC_TILD,    _SHIFTED_NUMBERS_,               _______, _______
#define _LOWER_ALPHAS2_11_WO_SCLN_         _______,    _LOWER_SYMBOLS_R2L_, _4_BLANKS_, KC_PIPE
#define _LOWER_ALPHAS2_12_                 _______,    _LOWER_SYMBOLS_R2_,              KC_PIPE
#define _LOWER_ALPHAS3_12_                 _12_BLANKS_
#define _LOWER_ALPHAS3_12_WO_SLASH_        _12_BLANKS_
#define _LOWER_ALPHAS3_13_DOUBLE_B_        _12_BLANKS_, _______
#define _LOWER_BTM_4MODS_2SPC_             _4_BLANKS_,    _DOUBLE_SPACEBAR_ADJUST_RIGHT_,       _4_BLANKS_
#define _LOWER_BTM_3MODS_2SPC_             _3_BLANKS_,    _DOUBLE_SPACEBAR_ADJUST_RIGHT_,       _3_BLANKS_
#define _LOWER_BTM_3MODS_3SPC_             _3_BLANKS_,    _TRIPLE_SPACEBAR_ADJUST_RIGHT_,       _3_BLANKS_
#define _LOWER_BTM_2MODS_2SPC_             _2_BLANKS_,    _DOUBLE_SPACEBAR_ADJUST_RIGHT_,       _2_BLANKS_

#define _RAISE_NUMBERS_14_                 _______, _10_BLANKS_, _3_BLANKS_
#define _RAISE_ALPHAS1_12_                 KC_GRV,     _NUMBERS_,                           _______
#define _RAISE_ALPHAS1_13_ESC_SPLIT_BSPC_  KC_GRV,    _NUMBERS_,                           _______, _______
#define _RAISE_ALPHAS1_14_                 _______, _10_BLANKS_, _3_BLANKS_
#define _RAISE_ALPHAS2_11_WO_SCLN_         _______,    _RAISE_SYMBOLS_R2L_, _VIM_NAV_KEYS_, KC_BSLS
#define _RAISE_ALPHAS2_12_                 _______,    _RAISE_SYMBOLS_R2_,                  KC_BSLS
#define _RAISE_ALPHAS2_13_                 _______, _5_BLANKS_,  _VIM_NAV_KEYS_, _3_BLANKS_
#define _RAISE_ALPHAS3_12_                 _______,    _10_BLANKS_,                         _______
#define _RAISE_ALPHAS3_12_WO_SLASH_        _______,    _10_BLANKS_,                         _______
#define _RAISE_ALPHAS3_13_DOUBLE_B_        _______,    _5_BLANKS_, _______, _5_BLANKS_,     _______
#define _RAISE_BTM_4MODS_2SPC_             _4_BLANKS_,    _DOUBLE_SPACEBAR_ADJUST_LEFT_,        _4_BLANKS_
#define _RAISE_BTM_3MODS_2SPC_             _3_BLANKS_,    _DOUBLE_SPACEBAR_ADJUST_LEFT_,        _3_BLANKS_
#define _RAISE_BTM_3MODS_3SPC_             _3_BLANKS_,    _TRIPLE_SPACEBAR_ADJUST_LEFT_,        _3_BLANKS_
#define _RAISE_BTM_2MODS_2SPC_             _2_BLANKS_,    _DOUBLE_SPACEBAR_ADJUST_LEFT_,        _2_BLANKS_
#define _RAISE_BTM_3_4_MODS_1SPC_          _3_BLANKS_,    _______,                              _4_BLANKS_

#define _ADJUST_FKEYS_17_                  RESET,  _F_KEYS_1_TO_13_, KC_PSCR, KC_SLCK, KC_PAUS
#define _ADJUST_NUMBERS_14_                RESET,  _F_KEYS_1_TO_10_, KC_F11, KC_F12, KC_F13
#define _ADJUST_NUMBERS_14_SAMUEL_         KC_GRV, _F_KEYS_1_TO_10_, KC_F11, KC_F12, RESET
#define _ADJUST_NUMBERS_15_TA65_           _ADJUST_NUMBERS_14_, _2_BLANKS_
#define _ADJUST_NUMBERS_17_IRON180_        _ADJUST_NUMBERS_14_, KC_F13, KC_INS, KC_HOME, KC_PGUP
#define _ADJUST_ALPHAS1_12_                RESET,      _F_KEYS_1_TO_10_, KC_F11
#define _ADJUST_ALPHAS1_13_ESC_SPLIT_BSPC_ RESET,    _F_KEYS_1_TO_10_, KC_F11, KC_F12
#define _ADJUST_ALPHAS1_14_                _2_BLANKS_, KC_UP, _______, _10_BLANKS_
#define _ADJUST_ALPHAS1_15_                _ADJUST_ALPHAS1_14_, _______
#define _ADJUST_ALPHAS1_17_                _ADJUST_ALPHAS1_14_, _3_BLANKS_
#define _ADJUST_ALPHAS2_11_WO_SCLN_        _______,    _5_BLANKS_, _VIM_NAV_KEYS_, KC_ENTER
#define _ADJUST_ALPHAS2_12_                _______,    _5_BLANKS_, _VIM_NAV_KEYS, _2_BLANKS_
#define _ADJUST_ALPHAS2_13_                _______, KC_LEFT, KC_DOWN, KC_RGHT, _2_BLANKS_, _VIM_NAV_KEYS_, _3_BLANKS_
#define _ADJUST_ALPHAS2_13_IRON180_        _______, KC_LEFT, KC_DOWN, KC_RGHT, _2_BLANKS_, _VIM_NAV_KEYS_, _4_BLANKS_
#define _ADJUST_ALPHAS2_14_                _ADJUST_ALPHAS2_13_, _______
#define _ADJUST_ALPHAS2_14_TA65_           _ADJUST_ALPHAS2_13_, _2_BLANKS_
#define _ADJUST_ALPHAS3_12_                _______,    _10_BLANKS_,      _______
#define _ADJUST_ALPHAS3_12_WO_SLASH_       _______,    _10_BLANKS_,      _______
#define _ADJUST_ALPHAS3_13_IRON180_        _15_BLANKS_
#define _ADJUST_ALPHAS3_13_DOUBLE_B_       _______,    _5_BLANKS_, _______, _5_BLANKS_, _______
#define _ADJUST_ALPHAS3_14_                _ADJUST_ALPHAS3_12_, _2_BLANKS_
#define _ADJUST_ALPHAS3_14_TA65_           _______, _ADJUST_ALPHAS3_12_, _2_BLANKS_
#define _ADJUST_BTM_4MODS_2SPC_            _4_BLANKS_,    _______, _______,                     _4_BLANKS_
#define _ADJUST_BTM_3MODS_2SPC_            _3_BLANKS_,    _______, _______,                     _3_BLANKS_
#define _ADJUST_BTM_3MODS_3SPC_            _3_BLANKS_,    _3_BLANKS_,                           _3_BLANKS_
#define _ADJUST_BTM_2MODS_2SPC_            _2_BLANKS_,    _______, _______,                     _2_BLANKS_
#define _ADJUST_BTM_3_4_MODS_1SPC_         _3_BLANKS_,    _______,                              _4_BLANKS_
#define _ADJUST_BTM_3_2_MODS_1SPC_3CUR_    _3_BLANKS_,    _______,                              _2_BLANKS_, _3_BLANKS_
#define _ADJUST_BTM_3_4_MODS_1SPC_3CUR_    _10_BLANKS_,    _______
#define _ADJUST_BTM_TA65_NOFN_             _10_BLANKS_
