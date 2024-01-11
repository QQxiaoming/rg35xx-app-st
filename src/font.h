#ifndef __FONT_H__
#define __FONT_H__

#include <SDL/SDL_ttf.h>

int font_init(void);
void draw_char(SDL_Surface* surface, unsigned char symbol, int x, int y,struct SDL_Color *color);
void draw_string(SDL_Surface* surface, const char* text, int x, int y,struct SDL_Color *color);

#endif
