// Converted using ConvPNG
// This file contains all the graphics sources for easier inclusion in a project
#ifndef __sprites_gfx__
#define __sprites_gfx__
#include <stdint.h>

#define canvas_width 64
#define canvas_height 32
#define canvas_size 2050
extern uint8_t canvas_data[2050];
#define canvas ((gfx_sprite_t*)canvas_data)

#define scanvas_width 128
#define scanvas_height 64
#define scanvas_size 8194
extern uint8_t scanvas_data[8194];
#define scanvas ((gfx_sprite_t*)scanvas_data)

#define sizeof_sprites_gfx_pal 4
extern uint16_t sprites_gfx_pal[2];

#endif
