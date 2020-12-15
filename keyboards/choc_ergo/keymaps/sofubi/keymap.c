/* Copyright 2020 merlin04
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "sofubi.h"

#define LAYOUT_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_wrapper( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    KC_NO, KC_BSPC, LT(7, KC_SPC), KC_NO \
  )
#define LAYOUT_base_wrapper(...)       LAYOUT_base(__VA_ARGS__)

// Most people using this small of a keyboard will have their own keymap so no complete keymap is provided
// This is just meant for testing that all of the keys work
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_base_wrapper(
      _________________34_L1_____________________, _________________34_R1_____________________,
      _________________34_L2_____________________, _________________34_R2_____________________,
      _________________34_L3_____________________, _________________34_R3_____________________
  ),
  [_MOUSE] = LAYOUT_wrapper(
      _________________34_MOUSE_L1_______________, _________________34_MOUSE_R1_______________,
      _________________34_MOUSE_L2_______________, _________________34_MOUSE_R2_______________,
      _________________34_MOUSE_L3_______________, _________________34_MOUSE_R3_______________,
      _______, _______, _______, _______
  ),
  [_ALWAYS] = LAYOUT_wrapper(
      _________________34_ALWAYS_L1______________, _________________34_ALWAYS_R1______________,
      _________________34_ALWAYS_L2______________, _________________34_ALWAYS_R2______________,
      _________________34_ALWAYS_L3______________, _________________34_ALWAYS_R3______________,
      _______, KC_TAB, KC_NO, _______
  ),
  [_FUNC] = LAYOUT_wrapper(
      _________________34_FUNC_L1________________, _________________34_FUNC_R1________________,
      _________________34_FUNC_L2________________, _________________34_FUNC_R2________________,
      _________________34_FUNC_L3________________, _________________34_FUNC_R3________________,
      _______, _______, _______, _______
  ),
  [_NAV] = LAYOUT_wrapper(
      _________________34_NAV_L1_________________, _________________34_NAV_R1_________________,
      _________________34_NAV_L2_________________, _________________34_NAV_R2_________________,
      _________________34_NAV_L3_________________, _________________34_NAV_R3_________________,
      _______, _______, _______, _______
  ),
  [_RSYM] = LAYOUT_wrapper(
      _________________34_RSYM_L1________________, _________________34_RSYM_R1________________,
      _________________34_RSYM_L2________________, _________________34_RSYM_R2________________,
      _________________34_RSYM_L3________________, _________________34_RSYM_R3________________,
      _______, _______, _______, _______
  ),
  [_LSYM] = LAYOUT_wrapper(
      _________________34_LSYM_L1________________, _________________34_LSYM_R1________________,
      _________________34_LSYM_L2________________, _________________34_LSYM_R2________________,
      _________________34_LSYM_L3________________, _________________34_LSYM_R3________________,
      _______, _______, _______, _______
  ),
  [_NUM] = LAYOUT_wrapper(
      _________________34_NUM_L1_________________, _________________34_NUM_R1_________________,
      _________________34_NUM_L2_________________, _________________34_NUM_R2_________________,
      _________________34_NUM_L3_________________, _________________34_NUM_R3_________________,
      _______, _______, _______, _______
  ),
};
