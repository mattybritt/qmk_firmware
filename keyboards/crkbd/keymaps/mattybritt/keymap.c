#include QMK_KEYBOARD_H

enum layers {
  _BASE,
  _NUMBER,
  _SYMBOL,
  _FUNCTION,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x6_3(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,                      KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH,
                             KC_ESC, KC_A, LALT_T(KC_O), LSFT_T(KC_E), LCTL_T(KC_U), KC_I,      KC_D, RCTL_T(KC_H), RSFT_T(KC_T), LALT_T(KC_N), KC_S, KC_BSLS,
                             MO(3), KC_SCLN, KC_Q, KC_J, KC_K, KC_X,                            KC_B, KC_M, KC_W, KC_V, KC_Z, MO(3),
                                                     KC_BSPC, KC_BSPC, MO(2),          MO(1), KC_ENT, KC_SPC),



	[_NUMBER] = LAYOUT_split_3x6_3(KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5,                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_TRNS, KC_NO, KC_NO, KC_LEFT, KC_RGHT,                           KC_NO, KC_NO, KC_UP, KC_DOWN, KC_NO, KC_NO, KC_TRNS,
                                                    KC_NO, KC_NO, KC_TRNS,             KC_TRNS, KC_NO, KC_NO),




	[_SYMBOL] = LAYOUT_split_3x6_3(KC_PPLS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                 KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PMNS,
                             KC_PEQL, KC_TILD, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_UNDS,
                             KC_TRNS, KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_TRNS,
                                                    KC_NO, KC_NO, KC_TRNS,              KC_TRNS, KC_NO, KC_NO),



	[_FUNCTION] = LAYOUT_split_3x6_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                       KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR,
                             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                    KC_NO, KC_NO, QK_BOOT,             KC_SLEP, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
