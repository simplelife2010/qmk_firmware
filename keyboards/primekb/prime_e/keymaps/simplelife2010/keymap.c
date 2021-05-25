/* Copyright 2018 Holten Campbell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

// Left-hand home row mods (raise)
#define RAISE_A LCTL_T(KC_MINS)
#define RAISE_S LALT_T(KC_EQL)
#define RAISE_D LGUI_T(KC_LBRC)
#define RAISE_F LSFT_T(KC_RBRC)

// Right-hand home row mods (raise)
#define RAISE_J RSFT_T(KC_DOWN)
#define RAISE_K RGUI_T(KC_UP)
#define RAISE_L RALT_T(KC_RGHT)
#define RAISE_SCLN RCTL_T(KC_NO)

// Space-Lower/Raise
#define SPC_LWR LT(1, KC_SPC)
#define SPC_RSE LT(2, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
		KC_ESC,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,             KC_Y,      KC_U,       KC_I,      KC_O,      KC_P,      KC_DEL,    KC_BSPC,
		KC_TAB,    HOME_A,    HOME_S,    HOME_D,    HOME_F,    KC_G,             KC_H,      HOME_J,     HOME_K,    HOME_L,    HOME_SCLN, KC_ENT,
		KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,             MO(3),     KC_N,       KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_LSFT,
		KC_LCTL,   KC_LALT,                         KC_LCMD,   SPC_LWR,          SPC_RSE,   KC_RCMD,                                     KC_RALT,   KC_RCTL
    ),

    LAYOUT(
		KC_TILD,   KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,          KC_CIRC,   KC_AMPR,    KC_ASTR,   KC_LPRN,   KC_RPRN,   _______,   _______,
		_______,   KC_UNDS,   KC_PLUS,   KC_LCBR,   KC_RCBR,   KC_DQUO,          KC_MS_L,   KC_MS_D,    KC_MS_U,   KC_MS_R,   _______,   KC_PIPE,
		_______,   _______,   _______,   _______,   KC_VOLD,   KC_BRID,          _______,   _______,    KC_MUTE,   _______,   _______,   _______,   _______,
		_______,   _______,                         _______,   _______,          KC_BTN1,   KC_BTN2,                                     _______,   _______
    ),

    LAYOUT(
		KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,             KC_6,      KC_7,       KC_8,      KC_9,      KC_0,       _______,   _______,
		_______,   RAISE_A,   RAISE_S,   RAISE_D,   RAISE_F,   KC_QUOT,          KC_LEFT,   RAISE_J,    RAISE_K,   RAISE_L,   RAISE_SCLN, KC_BSLS,
		_______,   _______,   _______,   _______,   KC_VOLU,   KC_BRIU,          _______,   _______,    KC_MUTE,   _______,   _______,    _______,   _______,
		_______,   _______,                         _______,   _______,	         _______,   _______,                                      _______,   _______
    ),

    LAYOUT(
		RESET,    KC_F1,     KC_F2,     KC_F3,     KC_F4,      KC_F5,            KC_F6,     KC_F7,      KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,
		_______,  _______,   _______,   _______,   _______,    _______,          _______,   _______,    _______,   _______,   _______,   _______,
		_______,  _______,   _______,   _______,   _______,    _______,          _______,   _______,    _______,   _______,   _______,   _______,   _______,
		_______,  _______,                         _______,    _______,	         _______,   _______,                                     _______,   _______
    )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}

void matrix_scan_user(void) {

}


void led_set_user(uint8_t usb_led) {
/*
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinHigh(B2);
  } else {
    writePinLow(B2);
  }
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(B1);
  } else {
    writePinLow(B1);
  }
*/
/*
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinHigh(B3);
  } else {
    writePinLow(B3);
  }*/

}

//function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state)
{
    if (get_highest_layer(state) == 1) {
    writePinHigh(B1);
	} else {
		writePinLow(B1);
    }
    if (get_highest_layer(state) == 2) {
    writePinHigh(B2);
	} else {
		writePinLow(B2);
    }
    if (get_highest_layer(state) == 3) {
    writePinHigh(B3);
	} else {
		writePinLow(B3);
    }
    return state;
}
