// Personal keymap based on several years of working with miryoku, rebuilt as a QMK learning excuse

#include QMK_KEYBOARD_H

#define MEDIAMOD LT(_MEDIA,KC_ESC)
#define NAVMOD   LT(_NAV,  KC_SPC)
#define MOUSEMOD LT(_MOUSE,KC_TAB)
#define SYMMOD   LT(_SYM,  KC_ENT)
#define NUMMOD   LT(_NUM,  KC_BSPC)
#define FUNMOD   LT(_FUN,  KC_DEL)

enum layer_number {
  _COLEMAKDH = 0,
  _MEDIA,
  _NAV,
  _MOUSE,
  _SYM,
  _NUM,
  _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAKDH] = LAYOUT(
        KC_NO, KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                             KC_NO,  KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
        KC_NO, KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                              KC_J,   KC_L,         KC_U,         KC_Y,         KC_QUOT,      KC_NO,
        KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,                              KC_M,   RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_NO,
        KC_NO, KC_Z,         KC_X,         KC_C,         KC_D,         KC_V,     KC_NO,           KC_NO,  KC_K,   KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_NO,
                                           KC_NO,        MEDIAMOD,     NAVMOD,   MOUSEMOD,        SYMMOD, NUMMOD, FUNMOD,       KC_NO
    ),
    [_MEDIA] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                          KC_NO,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                 KC_NO,   KC_NO,   KC_NO, KC_NO,          KC_MSTP, KC_MPLY, KC_MUTE, KC_NO
    ),
    [_NAV] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_AGIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO, KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                        KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,          KC_NO, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,
                                 KC_NO,   KC_NO,   KC_NO, KC_NO,          KC_NO, KC_NO,   KC_NO,   KC_NO
    ),
    [_MOUSE] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_AGIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO, KC_NO,
        KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                          KC_NO,   MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,   MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_NO,
                                 KC_NO,   KC_NO,   KC_NO,   KC_NO,        MS_BTN2, MS_BTN1, MS_BTN3, KC_NO
    ),
    [_SYM] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                      KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO,
        KC_NO, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NO,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                 KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [_NUM] = LAYOUT(
        KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,  KC_NO,                        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_LBRC, KC_7,  KC_8,  KC_9,   KC_RBRC,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_SCLN, KC_4,  KC_5,  KC_6,   KC_EQL,                       KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO,
        KC_NO, KC_GRV,  KC_1,  KC_2,  KC_3,   KC_BSLS, KC_NO,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                               KC_NO, KC_DOT, KC_0,    KC_MINS,      KC_NO, KC_NO, KC_NO, KC_NO
    ),
    [_FUN] = LAYOUT(
        KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,                        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_F12, KC_F7,  KC_F8,  KC_F9, KC_PSCR,                      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_F11, KC_F4,  KC_F5,  KC_F6, KC_SCRL,                      KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO,
        KC_NO, KC_F10, KC_F1,  KC_F2,  KC_F3, KC_PAUS, KC_NO,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                               KC_NO, KC_APP, KC_SPC,  KC_TAB,       KC_NO, KC_NO, KC_NO,   KC_NO
    )
};
