#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define CT_L_ANGLE LSFT(KC_NUBS)	//this symbol > //
#define ISO_BSLA RALT(KC_MINS)		//this symbol \ //
#define ISO_LBRAC RALT(KC_8)		//this symbol [ //
#define ISO_RBRAC RALT(KC_9)		//this symbol ] //
#define ISO_SLA LSFT(KC_7)		//just a slash // 
#define ISO_QUOT LSFT(KC_BSLASH)	//this symbol ' //
#define ISO_COMM LSFT(KC_COMM)		//just a semicolon because fuck german ISO//
#define SwirlLBRAC RALT(KC_7)		//this symbol { //
#define SwirlRBRAC RALT(KC_0)		//this symbol } //
#define ISO_BAR RALT(KC_NUBS)		//this symbol | //
#define FN_EURO RALT (KC_E)			// simple € symbol
#define FN_AT RALT (KC_Q)			// simple @ symbol

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	  /* Keymap: (Base Layer) Default Layer !! written in DE ISO
   * ,-----------------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  ß|  ´|Backsp |F24  |
   * |-----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  ü|  +|  #  |PgUp |
   * |-----------------------------------------------------------------| 
   * |FN     |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ö|  ä|Return |PgDw |
   * |-----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  -| Shift|UP |Del  |
   * |-----------------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space      | Alt| FN| Ctrl| Left|Down |Right| 
   * `-----------------------------------------------------------------'
   */
		[_LAYER0] = LAYOUT_65_ansi( /* Base */
			KC_GESC,       KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_F24,\
		    	KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, KC_PGUP,\
			MO(2),	KC_A,  KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    KC_PGDN,\
			KC_LSFT,       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,     KC_DEL,\
		    	KC_LCTL,       KC_LGUI,  KC_LALT,                KC_SPC,                KC_RALT, MO(1),    KC_RCTL,    KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_LAYER1] = LAYOUT_65_ansi( /* FN */
			KC_GESC,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_HOME,\
		    	KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_LBRC,  KC_RBRC, RESET,    KC_PGUP,\
			MO(0),RGB_SPI, RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EEP_RST,  KC_PGDN,\
		    	KC_LSFT,       KC_TRNS,  RGB_M_P, RGB_M_G,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_VOLU,  KC_MUTE,\
		    	KC_TRNS,       KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS,  KC_MPRV,          KC_VOLD,  KC_MNXT),
			 /* Keymap: (Funktion Layer) Layer with ANSI Kays for easy use on ISO
   * ,------------------------------------------------------------------------.
   * |Esc~| F1| F2| F3| F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11| F12|Del |Home| 
   * |----------------------------------------------------------------.-------|
   * |Tab  |  @ |  UP|  € |  No|  No|  No|  No|  No|  No|  No| [ | ]|  \  |F16|
   * |------------------------------------------------------------------------| 
   * |FN     |Left|Down|Right| No|  No|  No|  No|  No|  No| ;|  '|Return |F17 |
   * |------------------------------------------------------------------------|
   * |FN(3)   |  No|  No|  No|  No|  No|  No|  No|  < |  > |  / | No| No| No  |
   * |------------------------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space                   | Alt| FN |Ctrl|F13|F14|F15|
   * `------------------------------------------------------------------------'
   */
		[_LAYER2] = LAYOUT_65_ansi( /* FN2 */
			KC_GRV,      KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_HOME,\
			KC_TAB,      FN_AT,     KC_UP,     FN_EURO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,    KC_NO,     KC_NO,     ISO_LBRAC, ISO_RBRAC, ISO_BSLA, KC_F16,\
			KC_TRNS,     KC_LEFT,  KC_DOWN, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, ISO_COMM,  ISO_QUOT,          EEP_RST,  KC_F17,\
			MO(3),       KC_NO,     KC_NO,     KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NUBS, CT_L_ANGLE,   ISO_SLA,  KC_NO,           KC_NO,     KC_NO,\
			KC_NO,       KC_NO,  KC_NO,                KC_NO,                KC_NO, KC_NO,    KC_NO,    KC_F13,           KC_F14,   KC_F15),
				 /* Keymap: (Funktion Layer) Layer with some added ANSI Kays for easy use on ISO
   * ,------------------------------------------------------------------------.
   * |Esc~| F1| F2| F3| F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11| F12|Del |Home| 
   * |----------------------------------------------------------------.-------|
   * |Tab  |  No|  UP|  No|  No|  No|  No|  No|  No|  No|  No| { | }|  |  |F16|
   * |------------------------------------------------------------------------| 
   * |TRNS   |Left|Down|Right| No|  No|  No|  No|  No| No| No| No|Return |F17 |
   * |------------------------------------------------------------------------|
   * |    No  |  No|  No|  No|  No|  No|  No|  No|  No|  No| No|  No  | No| No|
   * |------------------------------------------------------------------------|
   * | No | No | No |      No                      | No | No | No |F13|F14|F15|
   * `------------------------------------------------------------------------'
   */
		[_LAYER3] = LAYOUT_65_ansi( /* FN3 */
			KC_GRV,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_HOME,\
			KC_TAB,       KC_NO,     KC_UP,     KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO,    KC_NO,     KC_NO,     SwirlLBRAC,  SwirlRBRAC, ISO_BAR, KC_F16,\
			KC_TRNS,     KC_LEFT,  KC_DOWN, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,          EEP_RST,  KC_F17,\
			KC_NO,       KC_NO,     KC_NO,     KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_NO, KC_NO,   KC_NO,  KC_NO,           KC_NO,     KC_NO,\
			KC_NO,       KC_NO,  KC_NO,                KC_NO,                KC_NO, KC_NO,    KC_NO,    KC_F13,           KC_F14,   KC_F15),
};



void rgb_matrix_indicators_user(void)
{
	    if (IS_LED_ON(host_keyboard_leds(), USB_LED_CAPS_LOCK))
	    {
	      rgb_matrix_set_color(8, 0xFF, 0xFF, 0xFF);
	    }
			switch (biton32(layer_state)){
			    case _LAYER0:
			rgb_matrix_set_color_all(173, 6, 96);
			rgb_matrix_set_color(17, RGB_BLUE);
			rgb_matrix_set_color(16, RGB_BLUE);
			rgb_matrix_set_color(15, RGB_BLUE);
			rgb_matrix_set_color(14, RGB_BLUE);
			rgb_matrix_set_color(13, RGB_BLUE);
			rgb_matrix_set_color(12, RGB_BLUE);
			rgb_matrix_set_color(11, RGB_BLUE);
			rgb_matrix_set_color(10, RGB_BLUE);
			rgb_matrix_set_color(9, RGB_BLUE);
			rgb_matrix_set_color(18, RGB_BLUE);
			rgb_matrix_set_color(19, RGB_BLUE);
			rgb_matrix_set_color(20, RGB_BLUE);
			rgb_matrix_set_color(21, RGB_BLUE);
			rgb_matrix_set_color(22, RGB_BLUE);
			rgb_matrix_set_color(23, RGB_BLUE);
			rgb_matrix_set_color(7, RGB_BLUE);
			rgb_matrix_set_color(8, RGB_BLUE);
			rgb_matrix_set_color(49, RGB_BLUE);
			rgb_matrix_set_color(50, RGB_BLUE);
			rgb_matrix_set_color(42, RGB_BLUE);
			rgb_matrix_set_color(41, RGB_BLUE);
			rgb_matrix_set_color(35, RGB_BLUE);
			rgb_matrix_set_color(64, RGB_BLUE);
			rgb_matrix_set_color(65, RGB_BLUE);
			rgb_matrix_set_color(66, RGB_BLUE);
			rgb_matrix_set_color(67, RGB_BLUE);
			rgb_matrix_set_color(34, RGB_BLUE);
			rgb_matrix_set_color(33, RGB_BLUE);
			rgb_matrix_set_color(32, RGB_BLUE);
			rgb_matrix_set_color(59, RGB_BLUE);
			rgb_matrix_set_color(56, RGB_BLUE);
			rgb_matrix_set_color(58, RGB_BLUE);
			rgb_matrix_set_color(25, RGB_BLUE);
			rgb_matrix_set_color(24, RGB_BLUE);
		         break;
			// case _LAYER1: 
			// rgb_matrix_set_color_all(247, 4, 4);
			// break; 
			case _LAYER2:
			 rgb_matrix_set_color_all(RGB_BLUE);
			 rgb_matrix_set_color(17, 173, 6, 96);
			 rgb_matrix_set_color(16, 173, 6, 96);
			 rgb_matrix_set_color(15, 173, 6, 96);
			 rgb_matrix_set_color(14, 173, 6, 96);
			 rgb_matrix_set_color(13, 173, 6, 96);
			 rgb_matrix_set_color(12, 173, 6, 96);
			 rgb_matrix_set_color(11, 173, 6, 96);
			 rgb_matrix_set_color(10, 173, 6, 96);
			 rgb_matrix_set_color(18, 173, 6, 96);
			 rgb_matrix_set_color(19, 173, 6, 96);
			 rgb_matrix_set_color(20, 173, 6, 96);
			 rgb_matrix_set_color(21, 173, 6, 96);
			 rgb_matrix_set_color(22, 173, 6, 96);
			 rgb_matrix_set_color(23, 173, 6, 96);
 			  rgb_matrix_set_color(7, 173, 6, 96);
			  rgb_matrix_set_color(8, 173, 6, 96);
			  rgb_matrix_set_color(9, 173, 6, 96);
			 rgb_matrix_set_color(49, 173, 6, 96);
			 rgb_matrix_set_color(50, 173, 6, 96);
  		 	 rgb_matrix_set_color(42, 173, 6, 96);
			 rgb_matrix_set_color(41, 173, 6, 96);
			 rgb_matrix_set_color(35, 173, 6, 96);
			 rgb_matrix_set_color(64, 173, 6, 96);
			 rgb_matrix_set_color(65, 173, 6, 96);
			 rgb_matrix_set_color(66, 173, 6, 96);
			 rgb_matrix_set_color(67, 173, 6, 96);
			 rgb_matrix_set_color(34, 173, 6, 96);
			 rgb_matrix_set_color(33, 173, 6, 96);
			 rgb_matrix_set_color(32, 173, 6, 96);
		   	 rgb_matrix_set_color(59, 173, 6, 96);
			 rgb_matrix_set_color(56, 173, 6, 96);
			 rgb_matrix_set_color(58, 173, 6, 96);
			 rgb_matrix_set_color(25, 173, 6, 96);
			 rgb_matrix_set_color(24, 173, 6, 96);
			break;
			case _LAYER3:
			rgb_matrix_set_color_all(RGB_BLUE);
			rgb_matrix_set_color(9, 173, 6, 96);
			rgb_matrix_set_color(18, 173, 6, 96);
			rgb_matrix_set_color(19, 173, 6, 96);
			rgb_matrix_set_color(22, 173, 6, 96);
			rgb_matrix_set_color(20, 173, 6, 96);
			rgb_matrix_set_color(21, 173, 6, 96);
			rgb_matrix_set_color(23, 173, 6, 96);
			rgb_matrix_set_color(24, 173, 6, 96);
			rgb_matrix_set_color(26, 173, 6, 96);
			rgb_matrix_set_color(27, 173, 6, 96);
			rgb_matrix_set_color(28, 173, 6, 96);
			rgb_matrix_set_color(29, 173, 6, 96);
			rgb_matrix_set_color(30, 173, 6, 96);
			rgb_matrix_set_color(31, 173, 6, 96);
			rgb_matrix_set_color(52, 173, 6, 96);
			rgb_matrix_set_color(53, 173, 6, 96);
			rgb_matrix_set_color(54, 173, 6, 96);
			rgb_matrix_set_color(55, 173, 6, 96);
			rgb_matrix_set_color(56, 173, 6, 96);
			rgb_matrix_set_color(25, 173, 6, 96);
			rgb_matrix_set_color(62, 173, 6, 96);
			rgb_matrix_set_color(63, 173, 6, 96);
			rgb_matrix_set_color(57, 173, 6, 96);
			rgb_matrix_set_color(58, 173, 6, 96);
			rgb_matrix_set_color(59, 173, 6, 96);
			rgb_matrix_set_color(32, 173, 6, 96);
			rgb_matrix_set_color(64, 173, 6, 96);
			rgb_matrix_set_color(65, 173, 6, 96);
			rgb_matrix_set_color(66, 173, 6, 96);
			rgb_matrix_set_color(67, 173, 6, 96);
			rgb_matrix_set_color(34, 173, 6, 96);
			rgb_matrix_set_color(33, 173, 6, 96);
			break;
	    }
}

void matrix_init_user(void)
{
  //user initialization
}

void matrix_scan_user(void)
{
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	return true;

}
