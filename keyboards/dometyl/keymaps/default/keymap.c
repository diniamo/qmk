// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_hungarian.h"

enum custom_keycodes {
    CK_RPTM = SAFE_RANGE
};

// bspc/delete spc accent  symbol shift rptm
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        HU_B, HU_L, HU_D, HU_W,   HU_V,     HU_K,    HU_F,    HU_O,    HU_U,    HU_COMM,
        HU_N, HU_R, HU_T, HU_S,   HU_G,     HU_Y,    HU_H,    HU_A,    HU_E,    HU_I,
        HU_X, HU_Q, HU_M, HU_C,   HU_Z,     HU_J,    HU_P,    HU_QUOT, HU_MINS, HU_DOT,
                    0,    KC_SPC, KC_BSPC,  CK_RPTM, KC_LSFT, 0
    )
};

void process_repeat_magic(bool pressed) {
    uint16_t last_keycode = get_last_keycode();
    void (*action)(uint8_t) = pressed ? register_code : unregister_code;

    switch (last_keycode) {
    case KC_U: action(KC_E);         break;
    default:   action(last_keycode); break;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    case CK_RPTM:
        process_repeat_magic(record->event.pressed);
        return false;
    }

    return true;
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
    switch (keycode) {
    case CK_RPTM:
        return false;
    }

    return true;
}
