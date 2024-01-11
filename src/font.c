#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include "font.h"
#include "config.h"

TTF_Font *font = NULL;

int font_init(void) {
	font = TTF_OpenFont(FONT_PATH, FONT_HEIGHT);
    if(!font) {
        fprintf(stderr,"TTF_OpenFont err!\n");
		return -1;
    }
	return 0;
}

void draw_char(SDL_Surface* surface, unsigned char symbol, int x, int y,struct SDL_Color *color) {
	char text[2] = {symbol,'\0'};
    SDL_Surface *textSurface = TTF_RenderText_Solid(font, text, *color);
	SDL_Rect position = { x, y, 0, 0 };
    SDL_BlitSurface(textSurface, NULL, surface, &position);
    SDL_FreeSurface(textSurface);
}

void draw_string(SDL_Surface* surface, const char* text, int orig_x, int orig_y,struct SDL_Color *color) {
    SDL_Surface *textSurface = TTF_RenderUTF8_Solid(font, text, *color);
	SDL_Rect position = { orig_x, orig_y, 0, 0 };
    SDL_BlitSurface(textSurface, NULL, surface, &position);
    SDL_FreeSurface(textSurface);
}
