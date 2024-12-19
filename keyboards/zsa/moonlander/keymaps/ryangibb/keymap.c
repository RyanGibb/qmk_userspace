#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_uk.h"
#include "keymap_steno.h"

#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_REDO LCTL(KC_Y)
#define KC_PC_CUT  LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PSTE LCTL(KC_V)

enum custom_keycodes {
  VRSN = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base
  [0] = LAYOUT_moonlander(
    KC_MINUS,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(3),                         TG(5),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,
    KC_LBRC,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(2),                         TG(4),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_RBRC,
    UK_GRV,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           XXXXXXX,                       XXXXXXX,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,   UK_QUOT,
    UK_BSLS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLSH,        UK_HASH,
    KC_RALT,        KC_LGUI,        KC_LALT,        KC_LCTL,        KC_LSFT,                        KC_ESC,                        KC_DEL,                         KC_RSFT,        KC_RCTL,        KC_LALT,        KC_RGUI,        KC_RALT,
                                                                    KC_SPC,         MO(1),          KC_TAB,                        KC_ENT,         MO(1),          KC_BSPC
  ),
  // raise
  [1] = LAYOUT_moonlander(
    XXXXXXX,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          XXXXXXX,                       XXXXXXX,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    XXXXXXX,        XXXXXXX,        KC_PAUS,        KC_SCRL,        KC_INS,         XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        KC_PGDN,        KC_PGUP,        XXXXXXX,        KC_PSCR,        KC_F12,
    XXXXXXX,        XXXXXXX,        KC_MUTE,        KC_VOLD,        KC_VOLU,        XXXXXXX,        _______,                       XXXXXXX,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        XXXXXXX,
    XXXXXXX,        KC_MSTP,        KC_MPLY,        KC_MPRV,        KC_MNXT,        XXXXXXX,                                                       XXXXXXX,        KC_HOME,        KC_END,         KC_APP,         KC_CAPS_LOCK,   XXXXXXX,
    _______,        _______,        _______,        _______,        _______,                        XXXXXXX,                       XXXXXXX,                        _______,        _______,        _______,        _______,        _______,
                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  // numpad
  [2] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,                       XXXXXXX,        XXXXXXX,        KC_7,           KC_8,           KC_9,           S(KC_EQUAL),    _______,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        KC_4,           KC_5,           KC_6,           KC_MINUS,       XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                       XXXXXXX,        KC_1,           KC_2,           KC_3,           KC_SLSH,        XXXXXXX,
    _______,        _______,        _______,        _______,        _______,                        _______,                       _______,                        KC_0,           KC_COMMA,       KC_DOT,         S(KC_8),        XXXXXXX,
                                                                    _______,        XXXXXXX,        _______,                       _______,        XXXXXXX,        _______
  ),
  // mouse
  [3] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        _______,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        KC_MS_L,        KC_MS_D,        KC_MS_U,        KC_MS_R,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        _______,        _______,        _______,        _______,        XXXXXXX,                                                       KC_WH_L,        KC_WH_D,        KC_WH_U,        KC_WH_R,        XXXXXXX,        XXXXXXX,
    _______,        _______,        _______,        _______,        _______,                        _______,                       _______,                        _______,        _______,        _______,        _______,        _______,
                                                                    KC_BTN1,        KC_BTN2,        KC_BTN3,                       KC_BTN3,        KC_BTN2,        KC_BTN1
  ),
  // game
  [4] = LAYOUT_moonlander(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                       _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                       _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                       _______,        _______,        _______,        _______,        _______,        _______,        _______,
    KC_LSFT,        _______,        _______,        _______,        _______,        _______,                                                       _______,        _______,        _______,        _______,        _______,        _______,
    KC_LCTL,        _______,        _______,        _______,        KC_SPC,                         _______,                       _______,                        _______,        _______,        _______,        _______,        _______,
                                                                    _______,        _______,        _______,                       _______,        _______,        _______
  ),
  // board
  [5] = LAYOUT_moonlander(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       _______,        XXXXXXX,        XXXXXXX,        RGB_SAD,        RGB_SAI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        RGB_MOD,        RGB_SPD,        RGB_SPI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        AC_OFF,         AC_ON,          XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        RGB_TOG,        RGB_VAD,        RGB_VAI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        DT_DOWN,        DT_UP,          DT_PRNT,                                                       XXXXXXX,    TOGGLE_LAYER_COLOR, RGB_HUD,        RGB_HUI,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                        XXXXXXX,                       XXXXXXX,                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        QK_BOOT,
                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,                       XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
};

// const uint16_t PROGMEM board_layer[] = {TG(2), TG(3), COMBO_END};
// const uint16_t PROGMEM game_layer[]  = {TG(1), TG(2), COMBO_END};
// combo_t key_combos[] = {
//     COMBO(game_layer,  TG(4)),
//     COMBO(board_layer, TG(5)),
// };

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

#define BASE_COLOUR {HSV_WHITE}
#define RED {HSV_RED}
#define GREEN {HSV_GREEN}
#define OFF {HSV_OFF}
#define PINK {HSV_PINK}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
  [0] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
  [1] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    RED,            BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    RED,            BASE_COLOUR,    BASE_COLOUR,
  },
  [2] = {
    OFF,            BASE_COLOUR,    OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,
    OFF,            RED,            OFF,
    BASE_COLOUR,    OFF,            BASE_COLOUR,    BASE_COLOUR,

    OFF,            BASE_COLOUR,    OFF,            OFF,            OFF,
    OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,
    OFF,            OFF,            OFF,
    BASE_COLOUR,    OFF,            BASE_COLOUR,    BASE_COLOUR,
  },
  [3] = {
    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,
    RED,            OFF,            OFF,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,
    OFF,            OFF,            OFF,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
  [4] = {
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    PINK,           PINK,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    PINK,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,

    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
    BASE_COLOUR,    RED,            BASE_COLOUR,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,
  },
  [5] = {
    OFF,            OFF,            OFF,            OFF,            OFF,
    OFF,            OFF,            OFF,            OFF,            OFF,
    OFF,            OFF,            OFF,            OFF,            OFF,
    OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,    OFF,
    OFF,            OFF,            BASE_COLOUR,    BASE_COLOUR,    OFF,
    OFF,            OFF,            OFF,            BASE_COLOUR,
    OFF,            OFF,            OFF,
    OFF,            OFF,            OFF,            OFF,

    OFF,            OFF,            OFF,            OFF,            GREEN,
    OFF,            OFF,            OFF,            OFF,            OFF,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    OFF,
    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    OFF,
    OFF,            BASE_COLOUR,    BASE_COLOUR,    BASE_COLOUR,    OFF,
    OFF,            OFF,            OFF,            OFF,
    RED,            OFF,            OFF,
    OFF,            OFF,            OFF,            OFF,
  },
};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SPD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
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
