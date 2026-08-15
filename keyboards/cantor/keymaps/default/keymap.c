// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "keymap_hungarian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Graphite
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  HU_B, HU_L, HU_D,   HU_W,   HU_Z,     HU_QUOT, HU_F,    HU_O,    HU_U,    HU_J,    KC_BSPC,
        KC_ESC,  HU_N, HU_R, HU_T,   HU_S,   HU_G,     HU_Y,    HU_H,    HU_A,    HU_E,    HU_I,    KC_ENT,
        CW_TOGG, HU_Q, HU_X, HU_M,   HU_C,   HU_V,     HU_K,    HU_P,    HU_DOT,  HU_MINS, HU_COMM, KC_DEL,
                             OSL(1), KC_SPC, KC_BSPC,  QK_REP,  OS_LSFT, OSL(2)
    ),
    // Navigation
    [1] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS,
        KC_TRNS, OS_GUI, OS_LALT, OS_LCTL, OS_LSFT, KC_PSCR,  KC_NO,   HU_LEFT, HU_DOWN, HU_UP,   HU_RGHT, KC_TRNS,
        KC_TRNS, KC_NO,  KC_NO,   KC_MPRV, KC_MNXT, KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
    ),
    // Symbol
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_NO,   KC_NO,   HU_LCBR, HU_RCBR, KC_NO,    HU_QUOT, HU_DQUO, HU_EXLM, HU_PERC, HU_CIRC, KC_TRNS,
        KC_TRNS, HU_DQUO, HU_UNDS, HU_LPRN, HU_RPRN, KC_NO,    HU_HASH, HU_EQL,  HU_SLSH, HU_COLN, HU_SCLN, KC_TRNS,
        KC_TRNS, KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_NO,    KC_GRV,  HU_SCLN, HU_DOT,  HU_MINS, HU_COMM, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
    ),
    // Accent
    [3] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   HU_AACU, HU_EACU, HU_IACU, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
    ),
};
