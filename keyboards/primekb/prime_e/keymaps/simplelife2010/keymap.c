#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wrapper(
        _QWERTY_ALPHAS1_13_ESC_SPLIT_BSPC_,
        _QWERTY_ALPHAS2_12_TAB_,
        _QWERTY_ALPHAS3_13_DOUBLE_B_,
        _QWERTY_BTM_3MODS_2SPC_
    ),

    [_LOWER] = LAYOUT_wrapper(
        _LOWER_ALPHAS1_13_ESC_SPLIT_BSPC_,
        _LOWER_ALPHAS2_12_,
        _LOWER_ALPHAS3_13_DOUBLE_B_,
        _LOWER_BTM_3MODS_2SPC_
    ),

    [_RAISE] = LAYOUT_wrapper(
        _RAISE_ALPHAS1_13_ESC_SPLIT_BSPC_,
        _RAISE_ALPHAS2_12_,
        _RAISE_ALPHAS3_13_DOUBLE_B_,
        _RAISE_BTM_3MODS_2SPC_
    ),

    [_ADJUST] = LAYOUT_wrapper(
        _ADJUST_ALPHAS1_13_ESC_SPLIT_BSPC_,
        _ADJUST_ALPHAS2_12_,
        _ADJUST_ALPHAS3_13_DOUBLE_B_,
        _ADJUST_BTM_3MODS_2SPC_
    ),

    [_MOUSE] = LAYOUT_wrapper(
        _MOUSE_ALPHAS1_13_ESC_SPLIT_BSPC_,
        _MOUSE_ALPHAS2_12_,
        _MOUSE_ALPHAS3_13_DOUBLE_B_,
        _MOUSE_BTM_3MODS_2SPC_
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

void led_set_user(uint8_t usb_led) {
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
    writePinHigh(B3);
	} else {
		writePinLow(B3);
    }
    return state;
}
