#include QMK_KEYBOARD_H

#define KB_PWR KC_KB_POWER

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base
  [0] = LAYOUT_moonlander(
    KC_MINS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    TG(3),           TG(6),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL,
    KC_LBRC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    TG(2),           TG(5),   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_RBRC,
    KC_GRV,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    TG(1),           TG(4),   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                              KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NUHS,
    KC_RALT, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,          KC_ESC,          KC_DEL,           KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, KC_RALT,
                                        KC_SPC,  MO(1),   KC_TAB,          KC_ENT,  MO(1),   KC_BSPC
  ),
  // raise
  [1] = LAYOUT_moonlander(
    KC_SCRL, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX,         XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    KC_PAUS, XXXXXXX, XXXXXXX, KC_BRID, KC_BRIU, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX, KC_PSCR, KC_F12,
    KC_INS,  XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, _______,         XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG, XXXXXXX,
    XXXXXXX, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX,                           XXXXXXX, KC_HOME, KC_END,  KC_APP,  KC_CAPS, XXXXXXX,
    _______, _______, _______, _______, _______,          XXXXXXX,         XXXXXXX,          _______, _______, _______, _______, _______,
                                        XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
  ),
  // numpad
  [2] = LAYOUT_moonlander(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, KC_NUM,  KC_PSLS, KC_PAST, KC_PEQL, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,         XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_PENT, XXXXXXX,
    _______, _______, _______, _______, _______,          _______,         _______,          KC_P0,   KC_P0,   KC_PDOT, KC_PCMM, XXXXXXX,
                                        _______, XXXXXXX, _______,         _______, XXXXXXX, _______
  ),
  // mouse
  [3] = LAYOUT_moonlander(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, MS_BTN3, MS_BTN2, MS_BTN1, XXXXXXX, XXXXXXX,         XXXXXXX, MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, XXXXXXX, XXXXXXX,
    XXXXXXX, _______, _______, _______, _______, XXXXXXX,                           MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______,          _______,         _______,          _______, _______, _______, _______, _______,
                                        _______, _______, _______,         _______, _______, _______
  ),
  // game
  [4] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, XXXXXXX,         XXXXXXX, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, XXXXXXX,         XXXXXXX, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, XXXXXXX,         _______, _______, _______, _______, _______, _______, _______,
    KC_LSFT, _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______, _______,
    KC_LCTL, _______, _______, _______, KC_SPC,           _______,         _______,          _______, _______, _______, _______, _______,
                                        _______, _______, _______,         _______, _______, _______
  ),
  // steno (GeminiPR)
  // Standard stenography layout:
  //
  //   #  #  #  #  #  #        #  #  #  #  #  #
  //      S  T  P  H  *        *  F  P  L  T  D
  //      S  K  W  R  *        *  R  B  G  S  Z
  //            A  O              E  U
  //
  // Where:
  //   # = Number bar (1-9, 0, A-C in GeminiPR)
  //   S = Left/Right S (two separate keys)
  //   * = Star keys (4 positions, can be chorded)
  //   A O E U = Vowels (thumb keys)
  //   Consonants are chorded to form words
  [5] = LAYOUT_moonlander(
    STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  STN_N6,  XXXXXXX,         XXXXXXX, STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,  STN_NC,
    XXXXXXX, STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, XXXXXXX,         _______, STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    XXXXXXX, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, XXXXXXX,         XXXXXXX, STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,         XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        STN_A,   STN_O,   XXXXXXX,         XXXXXXX, STN_E,   STN_U
  ),
  // board
  [6] = LAYOUT_moonlander(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_SYRQ, KB_PWR,  XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, AC_OFF,  AC_ON,   XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, RM_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______,          XXXXXXX,         XXXXXXX,          _______, _______, _______, _______, _______,
                                        XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define ___ HSV_WHITE
#define _R_ HSV_RED
#define _G_ HSV_GREEN
#define xxx HSV_OFF
#define _P_ HSV_PINK

#define LEDMAP_moonlander( \
    L00, L01, L02, L03, L04, L05, L06,                     R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16,                     R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26,                     R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35,                               R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43, L44,            L46,           R46,     R40, R41, R42, R43, R44, \
                              L50, L51, L52,           R50, R51, R52 \
) { \
    { {L00}, {L01}, {L02}, {L03}, {L04}, {L05}, {L06} }, \
    { {L10}, {L11}, {L12}, {L13}, {L14}, {L15}, {L16} }, \
    { {L20}, {L21}, {L22}, {L23}, {L24}, {L25}, {L26} }, \
    { {L30}, {L31}, {L32}, {L33}, {L34}, {L35}, {xxx} }, \
    { {L40}, {L41}, {L42}, {L43}, {L44}, {xxx}, {xxx} }, \
    { {L50}, {L51}, {L52}, {L46}, {xxx}, {xxx}, {xxx} }, \
    { {R00}, {R01}, {R02}, {R03}, {R04}, {R05}, {R06} }, \
    { {R10}, {R11}, {R12}, {R13}, {R14}, {R15}, {R16} }, \
    { {R20}, {R21}, {R22}, {R23}, {R24}, {R25}, {R26} }, \
    { {xxx}, {R30}, {R31}, {R32}, {R33}, {R34}, {R35} }, \
    { {xxx}, {xxx}, {R40}, {R41}, {R42}, {R43}, {R44} }, \
    { {xxx}, {xxx}, {xxx}, {R46}, {R50}, {R51}, {R52} }, \
}

const uint8_t PROGMEM ledmap[][MATRIX_ROWS][MATRIX_COLS][3] = {
  // base
  [0] = LEDMAP_moonlander(
    ___, ___, ___, ___, ___, ___, ___,                     ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___,                     ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, ___,                     ___, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___,                               ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___,            ___,           ___,          ___, ___, ___, ___, ___,
                              ___, ___, ___,           ___, ___, ___
  ),
  // raise
  [1] = LEDMAP_moonlander(
    _P_, _P_, _P_, _P_, _P_, _P_, xxx,                     xxx, _P_, _P_, _P_, _P_, _P_, _P_,
    _P_, xxx, xxx, _P_, _P_, xxx, xxx,                     xxx, xxx, _P_, _P_, xxx, _P_, _P_,
    _P_, xxx, _P_, _P_, _P_, xxx, _R_,                     xxx, _P_, _P_, _P_, _P_, _P_, xxx,
    xxx, _P_, _P_, _P_, _P_, xxx,                               xxx, _P_, _P_, _P_, _P_, xxx,
    ___, ___, ___, ___, ___,            xxx,           xxx,          ___, ___, ___, ___, ___,
                              xxx, _R_, xxx,           xxx, _R_, xxx
  ),
  // numpad
  [2] = LEDMAP_moonlander(
    xxx, xxx, xxx, xxx, xxx, xxx, xxx,                     xxx, xxx, _P_, _P_, _P_, _P_, xxx,
    ___, xxx, xxx, xxx, xxx, xxx, _R_,                     xxx, xxx, _P_, _P_, _P_, _P_, ___,
    xxx, xxx, xxx, xxx, xxx, xxx, xxx,                     xxx, xxx, _P_, _P_, _P_, _P_, xxx,
    xxx, xxx, xxx, xxx, xxx, xxx,                               xxx, _P_, _P_, _P_, _P_, xxx,
    ___, ___, ___, ___, ___,            ___,           ___,          _P_, _P_, _P_, _P_, xxx,
                              ___, xxx, ___,           ___, xxx, ___
  ),
  // mouse
  [3] = LEDMAP_moonlander(
    xxx, xxx, xxx, xxx, xxx, xxx, _R_,                     xxx, xxx, xxx, xxx, xxx, xxx, xxx,
    xxx, xxx, xxx, xxx, xxx, xxx, xxx,                     xxx, xxx, xxx, xxx, xxx, xxx, xxx,
    xxx, xxx, _P_, _P_, _P_, xxx, xxx,                     xxx, _P_, _P_, _P_, _P_, xxx, xxx,
    xxx, ___, ___, ___, ___, xxx,                               _P_, _P_, _P_, _P_, xxx, xxx,
    ___, ___, ___, ___, ___,            ___,           ___,          ___, ___, ___, ___, ___,
                              ___, ___, ___,           ___, ___, ___
  ),
  // game
  [4] = LEDMAP_moonlander(
    ___, ___, ___, ___, ___, ___, xxx,                     xxx, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, xxx,                     xxx, ___, ___, ___, ___, ___, ___,
    ___, ___, ___, ___, ___, ___, xxx,                     _R_, ___, ___, ___, ___, ___, ___,
    _P_, ___, ___, ___, ___, ___,                               ___, ___, ___, ___, ___, ___,
    _P_, ___, ___, ___, _P_,            ___,           ___,          ___, ___, ___, ___, ___,
                              ___, ___, ___,           ___, ___, ___
  ),
  // steno
  [5] = LEDMAP_moonlander(
    _P_, _P_, _P_, _P_, _P_, _P_, xxx,                     xxx, _P_, _P_, _P_, _P_, _P_, _P_,
    xxx, _P_, _P_, _P_, _P_, _P_, xxx,                     _R_, _P_, _P_, _P_, _P_, _P_, _P_,
    xxx, _P_, _P_, _P_, _P_, _P_, xxx,                     xxx, _P_, _P_, _P_, _P_, _P_, _P_,
    xxx, xxx, xxx, xxx, xxx, xxx,                               xxx, xxx, xxx, xxx, xxx, xxx,
    xxx, xxx, xxx, xxx, xxx,            xxx,           xxx,          xxx, xxx, xxx, xxx, xxx,
                              _P_, _P_, xxx,           xxx, _P_, _P_
  ),
  // board
  [6] = LEDMAP_moonlander(
    xxx, xxx, xxx, xxx, xxx, xxx, xxx,                     _R_, xxx, xxx, xxx, xxx, xxx, _G_,
    xxx, xxx, xxx, _P_, _R_, xxx, xxx,                     xxx, xxx, xxx, xxx, xxx, xxx, xxx,
    xxx, xxx, xxx, _P_, _P_, xxx, xxx,                     xxx, xxx, _P_, xxx, xxx, xxx, xxx,
    xxx, xxx, xxx, xxx, xxx, xxx,                               xxx, xxx, xxx, xxx, xxx, xxx,
    ___, ___, ___, ___, ___,            xxx,           xxx,          ___, ___, ___, ___, ___,
                              xxx, xxx, xxx,           xxx, xxx, xxx
  ),
};

void set_layer_color(int layer) {
  for (int row = 0; row < MATRIX_ROWS; row++) {
    for (int col = 0; col < MATRIX_COLS; col++) {
      uint8_t led_index = g_led_config.matrix_co[row][col];
      if (led_index == NO_LED) continue;

      HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][row][col][0]),
        .s = pgm_read_byte(&ledmap[layer][row][col][1]),
        .v = pgm_read_byte(&ledmap[layer][row][col][2]),
      };

      if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color(led_index, 0, 0, 0);
      } else {
        RGB rgb = hsv_to_rgb(hsv);
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color(led_index, f * rgb.r, f * rgb.g, f * rgb.b);
      }
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rgb_matrix_get_flags() == LED_FLAG_NONE) { return false; }
  if (keyboard_config.disable_layer_led) { return false; }

  uint8_t layer = get_highest_layer(layer_state);
  if (layer < 7) {
    set_layer_color(layer);
  }

  // Caps lock indicator on the caps key (layer 1, right hand row 3, column 4)
  if (host_keyboard_led_state().caps_lock && (layer == 0 || layer == 1)) {
    uint8_t led_index = g_led_config.matrix_co[9][5];  // Right hand row 3, KC_CAPS position
    if (led_index != NO_LED) {
      rgb_matrix_set_color(led_index, RGB_RED);
    }
  }

  return true;
}

#if defined(MOONLANDER_USER_LEDS)
layer_state_t layer_state_set_kb(layer_state_t state) {
    state = layer_state_set_user(state);
    bool LED_1 = false;
    bool LED_2 = false;
    bool LED_3 = false;
    bool LED_4 = false;
    bool LED_5 = false;
#if !defined(CAPS_LOCK_STATUS)
    bool LED_6 = false;
#endif

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 1:
            LED_1 = true;
            break;
        case 2:
            LED_2 = true;
            break;
        case 3:
            LED_3 = true;
            break;
        case 4:
            LED_4 = true;
            break;
        case 5:
            LED_5 = true;
            break;
        case 6:
#if !defined(CAPS_LOCK_STATUS)
            LED_6 = true;
#endif
            break;
        default:
            break;
    }

    ML_LED_1(LED_1);
    ML_LED_2(LED_2);
    ML_LED_3(LED_3);
    ML_LED_4(LED_4);
    ML_LED_5(LED_5);
#if !defined(CAPS_LOCK_STATUS)
    ML_LED_6(LED_6);
#endif

    return state;
}
#endif
