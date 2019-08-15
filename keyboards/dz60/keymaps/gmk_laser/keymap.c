#include QMK_KEYBOARD_H

//#define KC_NO KC_TRNS
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define CT_L_ANGLE LSFT(KC_NUBS)  //this symbol > //
#define ISO_BSLA RALT(KC_MINS)    //this symbol \ //
#define ISO_LBRAC RALT(KC_8)    //this symbol [ //
#define ISO_RBRAC RALT(KC_9)    //this symbol ] //
#define ISO_SLA LSFT(KC_7)    //just a slash // 
#define ISO_QUOT LSFT(KC_BSLASH)  //this symbol ' //
#define ISO_COMM LSFT(KC_COMM)    //just a semicolon because fuck german ISO//
#define SwirlLBRAC RALT(KC_7)   //this symbol { //
#define SwirlRBRAC RALT(KC_0)   //this symbol } //
#define ISO_BAR RALT(KC_NUBS)   //this symbol | //
#define FN_EURO RALT (KC_E)     // simple € symbol
#define FN_AT RALT (KC_Q)     // simple @ symbol
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------------.
 * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  Ü  |  +  |    #   |
 * |-----------------------------------------------------------------------------------------+
 * | FN2     |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ä  |    Enter    |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | Del |
 * |-----------------------------------------------------------------------------------------+
 * | Ctrl |  Super  |  Alt  |              Space               | Alt | FN1 |  L  |  D  |  R  |
 * `-----------------------------------------------------------------------------------------'
 */

LAYOUT_directional(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT,         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
      KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT
      ),

/* FN Layer / default
 * ,-----------------------------------------------------------------------------------------.
 * | Esc | BL- | BL+ | BL  |     |     |     |RESET|     |     |     |     |     |           |
 * |-----------------------------------------------------------------------------------------+
 * |        |RBGM |     |     |     |     |     |     |     |     |     | Val+ | Val- |RBGTOG|
 * |-----------------------------------------------------------------------------------------+
 * |         | Hue+| Hue-| Sat+| Sat-|     |     |     |     |     |     |     |  RESET      |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     |     | Ctrl|     |
 * |-----------------------------------------------------------------------------------------+
 * |      |       |       |                                   |     |      |     |     |     |
 * `-----------------------------------------------------------------------------------------'
 */

LAYOUT_directional(
      KC_ESC, BL_TOGG, BL_STEP, BL_DEC, BL_INC, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI, RGB_VAD, RGB_TOG,
      KC_NO, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
      ),
/* FN Layer ANSI
 * ,-----------------------------------------------------------------------------------------.
 * | ` ~ |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |   Bkspc   |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    |  @  |  U  |  €  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
 * |-----------------------------------------------------------------------------------------+
 * | FN      |  L  |  D  |  R  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  <  |  >  |  /  | RSh |  U  | Del |
 * |-----------------------------------------------------------------------------------------+
 * | Ctrl |  Super  |  Alt  |              Space               | Alt | Ctrl |  L |  D  |  R  |
 * `-----------------------------------------------------------------------------------------'
 */

LAYOUT_directional(
      KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_BSPC,
      KC_TAB, FN_AT, KC_UP, FN_EURO, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, ISO_LBRAC, ISO_RBRAC, ISO_BSLA,
      KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, ISO_COMM, ISO_QUOT, KC_ENT,
      MO(3),         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_NUBS, CT_L_ANGLE, ISO_SLA, KC_RSFT, KC_UP, MO(1),
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT
      ),
LAYOUT_directional(
      KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_BSPC,
      KC_TAB, FN_AT, KC_UP, FN_EURO, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, SwirlLBRAC, SwirlRBRAC, ISO_BAR,
      KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_NO, KC_NO, KC_ENT,
      KC_NO,         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_UP, MO(1),
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RIGHT
      )
};
