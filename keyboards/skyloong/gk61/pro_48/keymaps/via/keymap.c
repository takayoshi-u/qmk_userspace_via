// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _WIN,
    _MAC,
    _WIN_INDEX,
    _MAC_INDEX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E | R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │   |Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │   |Sft|   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│GUI│Alt│   │Spc│Spc│Mut│   |Spc|Alt│App│Ctl│   │Mox|
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [_WIN] = LAYOUT_all(
        KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS,
        KC_LCTL,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,
        KC_LCTL,KC_LGUI,MT(MOD_LALT,KC_LNG2),KC_SPC,KC_SPC,KC_MUTE,KC_SPC,MT(MOD_LALT|MOD_RALT,KC_LNG1),MO(_WIN_INDEX),KC_APP,KC_RCTL
    ),

     [_MAC] = LAYOUT_all(
        KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS,
        KC_LGUI,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,
        KC_LCTL,KC_LGUI,MT(MOD_LALT,KC_LNG2),KC_SPC,KC_SPC,KC_MUTE,KC_SPC,MT(MOD_LALT|MOD_RALT,KC_LNG1),MO(_MAC_INDEX),KC_APP,KC_RCTL
    ),

    [_WIN_INDEX] =  LAYOUT_all(
        KC_GRV,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_DEL,
        KC_TAB,KC_HOME,KC_UP,KC_END,KC_NO,KC_UP,KC_NO,KC_NO,KC_NO,KC_NO,KC_PSCR,KC_NO,KC_NO,KC_INS,
        KC_LCTL,KC_LEFT,KC_DOWN,KC_RGHT,KC_NO,KC_DOWN,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_ENT,
        KC_LSFT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,TO(_MAC),KC_RSFT,
        KC_LCTL,KC_LGUI,MT(MOD_LALT,KC_LNG2),KC_SPC,KC_SPC,KC_MPLY,KC_SPC,MT(MOD_LALT|MOD_RALT,KC_LNG1),KC_NO,KC_APP,KC_RCTL
    ),

    [_MAC_INDEX] =  LAYOUT_all(
        KC_GRV,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_DEL,
        KC_TAB,KC_HOME,KC_UP,KC_END,KC_NO,KC_UP,KC_NO,KC_NO,KC_NO,KC_NO,KC_PSCR,KC_NO,KC_NO,KC_INS,
        KC_LGUI,KC_LEFT,KC_DOWN,KC_RGHT,KC_NO,KC_DOWN,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_ENT,
        KC_LSFT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,TO(_WIN),KC_NO,KC_RSFT,
        KC_LCTL,KC_LGUI,MT(MOD_LALT,KC_LNG2),KC_SPC,KC_SPC,KC_MPLY,KC_SPC,MT(MOD_LALT|MOD_RALT,KC_LNG1),KC_NO,KC_APP,KC_RCTL
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_WIN] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_MAC] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_WIN_INDEX] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [_MAC_INDEX] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) }
};
#endif

#ifdef RGB_MATRIX_ENABLE
// なめらかな明滅（ブレス）のための輝度値（0〜255）を計算する関数
uint8_t get_breathing_val(void) {
    // 周期を10秒（10000ミリ秒）に設定
    uint32_t ms = timer_read() % 10000;
    if (ms < 5000) {
        return (ms * 255) / 5000;
    } else {
        return ((10000 - ms) * 255) / 5000;
    }
}

bool rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case _WIN: {
            uint8_t val = get_breathing_val();
            rgb_matrix_set_color_all(0, 0, val); // 青でブレス
            break;
        }
        case _MAC: {
            uint8_t val = get_breathing_val();
            rgb_matrix_set_color_all(val, 0, 0); // 赤でブレス
            break;
        }
        case _WIN_INDEX:
            rgb_matrix_set_color_all(0, 0, 0); // 他は消灯
            rgb_matrix_set_color(51, 255, 255, 255); // TO(_MAC)キーを白に
            break;
        case _MAC_INDEX:
            rgb_matrix_set_color_all(0, 0, 0); // 他は消灯
            rgb_matrix_set_color(50, 255, 255, 255); // TO(_WIN)キーを白に
            break;
        default:
            break;
    }
    return true;
}
#endif
