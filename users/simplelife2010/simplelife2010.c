#include "simplelife2010.h"

// Determine the current tap dance state
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (!state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) return TD_DOUBLE_HOLD;
    else return TD_UNKNOWN;
}

// Initialize tap structure associated with example tap dance key
static td_tap_t eshym_tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

// Functions that control what our tap dance key does
void eshym_finished(qk_tap_dance_state_t *state, void *user_data) {
    eshym_tap_state.state = cur_dance(state);
    switch (eshym_tap_state.state) {
        case TD_SINGLE_TAP:
            tap_code(KC_ESC);
            break;
        case TD_SINGLE_HOLD:
            register_mods(HYPER_MODS);
            break;
        case TD_DOUBLE_HOLD:
            layer_on(_MOUSE);
            break;
        default:
            break;
    }
}

void eshym_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (eshym_tap_state.state) {
        case TD_SINGLE_HOLD:
            unregister_mods(HYPER_MODS);
            break;
        case TD_DOUBLE_HOLD:
            layer_off(_MOUSE);
            break;
        default:
            break;
    }
    eshym_tap_state.state = TD_NONE;
}

// Associate our tap dance key with its functionality
qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_ES_HY_M] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, eshym_finished, eshym_reset)
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ES_HY_M:
            return 200;
        default:
            return TAPPING_TERM;
    }
}
