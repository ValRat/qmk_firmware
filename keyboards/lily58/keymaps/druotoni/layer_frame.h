// Copyright 2021 Nicolas Druoton (druotoni)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// layer name : must be 3 chars
#define LAYER_NAME_0 "ABC"
#define LAYER_NAME_1 "SPE"
#define LAYER_NAME_2 "NAV"
#define LAYER_NAME_3 "ADJ"

enum layer_number { _QWERTY = 0, _LOWER, _RAISE, _ADJUST };

void render_gears(void);
void render_layer_frame(gui_state_t t);
void update_layer_frame(layer_state_t state);
