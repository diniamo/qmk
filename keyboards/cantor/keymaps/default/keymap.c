// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H
#include "keymap_hungarian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        0,       HU_B, HU_L, HU_D, HU_W,   HU_V,     HU_K,   HU_F,   HU_O,    HU_U,    HU_COMM, 0,
        0,       HU_N, HU_R, HU_T, HU_S,   HU_G,     HU_Y,   HU_H,   HU_A,    HU_E,    HU_I,    0,
        KC_LCTL, HU_Q, HU_X, HU_M, HU_C,   HU_Z,     HU_J,   HU_P,   HU_QUOT, HU_MINS, HU_DOT,  KC_RCTL,
                       0,    KC_SPC, KC_BSPC,  QK_REP, 0,      0
    )
};
