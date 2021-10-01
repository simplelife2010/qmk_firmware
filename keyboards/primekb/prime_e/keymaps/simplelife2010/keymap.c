#include QMK_KEYBOARD_H
#include "simplelife2010.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wrapper(
        _ROW1_QWERTY_40PERCENT_ESC_SPLIT_BSPC_,
        _ROW2_QWERTY_40PERCENT_TAB,
        _ROW3_QWERTY_40PERCENT_DOUBLE_B,
        _ROW4_QWERTY_40PERCENT_3MODS_2SPC_
    ),

    [_LOWER] = LAYOUT_wrapper(
        _ROW1_LOWER_40PERCENT_ESC_SPLIT_BSPC_,
        _ROW2_LOWER_40PERCENT_,
        _ROW3_LOWER_40PERCENT_DOUBLE_B,
        _ROW4_LOWER_40PERCENT_3MODS_2SPC_
    ),

    [_RAISE] = LAYOUT_wrapper(
        _ROW1_RAISE_40PERCENT_ESC_SPLIT_BSPC_,
        _ROW2_RAISE_40PERCENT_,
        _ROW3_RAISE_40PERCENT_DOUBLE_B,
        _ROW4_RAISE_40PERCENT_3MODS_2SPC_
    ),

    [_ADJUST] = LAYOUT_wrapper(
        _ROW1_ADJUST_40PERCENT_ESC_SPLIT_BSPC_,
        _ROW2_ADJUST_40PERCENT_,
        _ROW3_ADJUST_40PERCENT_DOUBLE_B,
        _ROW4_ADJUST_40PERCENT_3MODS_2SPC_
    ),

    [_MOUSE] = LAYOUT_wrapper(
        _ROW1_MOUSE_40PERCENT_ESC_SPLIT_BSPC_,
        _ROW2_MOUSE_40PERCENT_,
        _ROW3_MOUSE_40PERCENT_DOUBLE_B,
        _ROW4_MOUSE_40PERCENT_3MODS_2SPC_
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
