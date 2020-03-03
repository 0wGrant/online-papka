#include "SDL2/SDL.h"
#define SCREEN_WIDTH  600
#define SCREEN_HEIGHT  600

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		SDL_Quit(); return 0;
	}
	else
	{
	
	SDL_Window* window = NULL;
	window = SDL_CreateWindow("LR19", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	
	if (window == NULL) return 0;
	else
	{
		SDL_Surface* SURFACE = SDL_GetWindowSurface(window);
		
		SDL_MapRGB(SURFACE->format, 0xFF, 0xFF, 0xFF);
		SDL_Delay(3000);
		
		SDL_DestroyWindow(window);
	}
	
	SDL_Quit();
	}


	return 1;
}
