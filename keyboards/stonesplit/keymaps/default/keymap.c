// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_german.h"

//const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    [0] = LAYOUT(
  // |-----------|-----------|-----------|-----------|-----------|-----------|-----------|                                         |-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
//        KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                                                            KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_INSERT,  KC_HOME,    KC_PAGE_UP,
  // |-----------|-----------|-----------|-----------|-----------|-----------|-----------|                                         |-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
//        DE_CIRC,    DE_1,       DE_2,       DE_3,       DE_4,       DE_5,                                                             DE_6,       DE_7,       DE_8,       DE_9,       DE_0,       DE_SS,      DE_ACUT,    KC_DEL,     KC_END,     KC_PAGE_DOWN,
  // |-----------|-----------|-----------|-----------|-----------|-----------|-----------|                                         |-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
//        KC_TAB,     DE_Q,       DE_W,       DE_E,       DE_R,       DE_T,                                                             DE_Z,       DE_U,       DE_I,       DE_O,       DE_P,       DE_UDIA,    DE_PLUS,    
  // |-----------|-----------|-----------|-----------|-----------|-----------|-----------|                                         |-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
//        KC_CAPS,    DE_A,       DE_S,       DE_D,       DE_F,       DE_G,                                                             DE_H,       DE_J,       DE_K,       DE_L,       DE_ODIA,    DE_ADIA,    DE_HASH,
  // |-----------|-----------|-----------|-----------|-----------|-----------|-----------|                                         |-----------|-----------|-----------|-----------|-----------|-----------------------|-----------|-----------|-----------|
//        DE_PIPE,    KC_LSFT ,   DE_Y,       DE_X,       DE_C,       DE_V,       DE_B,                                                 DE_N,       DE_M,       DE_COMM,    DE_DOT,     DE_MINS,       KC_RIGHT_SHIFT,              KC_UP,
  // |-----------|---------------|--------------|-----------|-----------|-------------|----------|----------|        |-----------|-----------|----------|-----------|-----------|-------------|----------|---------------|----------|----------|----------|
//        KC_LCTL,    KC_LEFT_GUI,    KC_LEFT_ALT,   _______,    _______,    KC_SPACE,    KC_BACKSPACE,   KC_ESC,          KC_ENT,     KC_BACKSPACE,KC_SPACE, _______,     _______,    KC_RIGHT_ALT,_______,   KC_RIGHT_CTRL, KC_LEFT,    KC_DOWN,    KC_RIGHT
//    )
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      /* Alpha */
      KC_INSERT,        KC_F12,           KC_F11,           KC_F10,           KC_F9,            KC_F8,            KC_F7,            KC_F6,            KC_HOME,          /*|*/       _______,    _______,    KC_ESC ,        KC_F1,          KC_F2,          KC_F3,      KC_F4,      KC_F5,        _______,

      KC_DEL,           DE_ACUT,          DE_SS,            DE_0,             DE_9,             DE_8,             DE_7,             DE_6,             KC_END,                       _______,    _______,    DE_CIRC,        DE_1,           DE_2,           DE_3,       DE_4,       DE_5,         _______,

      KC_PAGE_UP,       DE_PLUS,          DE_UDIA,          DE_P,             DE_O,             DE_I,             DE_U,             DE_Z,             KC_ENT,                       _______,    _______,    KC_TAB,         DE_Q,           DE_W,           DE_E,       DE_R,       DE_T,         _______,

      KC_PAGE_DOWN,     DE_HASH,          DE_ADIA,          DE_ODIA,          DE_L,             DE_K,             DE_J,             DE_H,             _______,                      _______,    _______,    KC_CAPS,        DE_A,           DE_S,           DE_D,       DE_F,       DE_G,         _______,

      KC_RIGHT,         KC_BACKSPACE,     KC_RIGHT_SHIFT,   DE_MINS,          DE_DOT,           DE_COMM,          DE_M,             DE_N,             KC_UP,                        DE_PIPE,    _______,    KC_LSFT,        DE_Y,           DE_X,           DE_C,       DE_V,       DE_B,         _______,

      KC_LEFT,          _______,          KC_RIGHT_CTRL,    TO(0),            KC_RIGHT_ALT,     TO(0),          MO(1),          KC_SPACE,         KC_DOWN,                      KC_LCTL,    KC_ESC,     KC_LEFT_GUI,    KC_LEFT_ALT,    KC_DEL,            KC_LALT, MO(2),    KC_LSFT,     _______
      ),

    [1] = LAYOUT(
      /* Symbols */
      KC_INSERT,        KC_F12,           KC_F11,           KC_F10,           KC_F9,            KC_F8,            KC_F7,            KC_F6,            KC_HOME,          /*|*/       _______,    _______,    KC_ESC ,        KC_F1,          KC_F2,          KC_F3,      KC_F4,      KC_F5,        _______,

      KC_DEL,           DE_ACUT,          DE_SS,            KC_RCBR,          KC_RBRC,          KC_LBRC,          KC_LCBR,          DE_6,             KC_END,                       _______,    _______,    DE_CIRC,        DE_1,           DE_2,           DE_3,       DE_4,       DE_5,         _______,

      KC_PAGE_UP,       DE_PLUS,          DE_UDIA,          DE_P,             KC_END,           KC_PAGE_UP,       KC_PAGE_DOWN,     KC_HOME,          KC_ENT,                       _______,    _______,    KC_TAB,         LSFT(DE_Q),          DE_W,           DE_E,       KC_MS_BTN1, DE_T,         _______,

      KC_PAGE_DOWN,     DE_HASH,          DE_ADIA,          DE_ODIA,          KC_RIGHT,         KC_UP,          KC_DOWN,            KC_LEFT,          _______,                      _______,    _______,    KC_CAPS,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,   KC_MS_RIGHT,KC_MS_BTN2,         _______,

      KC_RIGHT,         KC_BACKSPACE,     KC_RIGHT_SHIFT,   DE_MINS,          DE_DOT,           DE_COMM,          LALT(LSFT(KC_TAB)),             LALT(KC_TAB),             KC_UP,                        KC_LSFT,    _______,    KC_PIPE,        DE_Y,           DE_X,           LCTL(DE_C), LCTL(DE_V),       DE_B,         _______,

      KC_LEFT,          _______,          KC_RIGHT_CTRL,    TO(0),          KC_RIGHT_ALT,     TO(0),          TO(2),          KC_SPACE,         KC_DOWN,                      KC_LCTL,    KC_ESC,     KC_LEFT_GUI,    KC_LEFT_ALT,    KC_BACKSPACE,   _______,    _______,    KC_LSFT,     _______
      ),

    [2] = LAYOUT(
      /* Mouse and Num */
      KC_INSERT,        KC_F12,           KC_F11,           KC_F10,           KC_F9,          KC_F8,         KC_F7,           KC_F6,            KC_HOME,          /*|*/       _______,    _______,    KC_ESC ,        KC_F1,          KC_F2,          KC_F3,      KC_F4,      KC_F5,        _______,

      KC_DEL,           DE_ACUT,          DE_SS,            KC_RCBR,          KC_9,           KC_8,          KC_7,            DE_6,             KC_END,                       _______,    _______,    DE_CIRC,        DE_1,           DE_2,           DE_3,       DE_4,       DE_5,         _______,

      KC_PAGE_UP,       DE_PLUS,          DE_UDIA,          DE_P,             KC_6,           KC_5,          KC_4,            KC_HOME,          KC_ENT,                       _______,    _______,    KC_TAB,         KC_AT,          DE_W,           DE_E,       KC_MS_BTN1,       DE_T,         _______,

      KC_PAGE_DOWN,     DE_HASH,          DE_ADIA,          DE_ODIA,          KC_3,           KC_2,          KC_1,            KC_LEFT,          _______,                      _______,    _______,    KC_CAPS,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,   KC_MS_RIGHT,       KC_MS_BTN2,         _______,

      KC_RIGHT,         KC_BACKSPACE,     KC_RIGHT_SHIFT,   DE_MINS,          _______,        DE_0,          DE_DOT,          DE_N,             KC_UP,                        KC_LSFT,    _______,    KC_PIPE,        DE_Y,           DE_X,           LCTL(DE_C),       LCTL(DE_V),       DE_B,         _______,

      KC_LEFT,          _______,          KC_RIGHT_CTRL,    TO(0),          KC_RIGHT_ALT,     TO(1),          TO(2),          KC_SPACE,         KC_DOWN,                      KC_LCTL,    KC_ESC,     KC_LEFT_GUI,    KC_LEFT_ALT,    KC_BACKSPACE,   _______,    _______,    KC_LSFT,     _______
      )
};