#include <iostream>
#include <SDL2/SDL.h>
#include "Texture.h"
#include "Rect.h"

bool init();


int main(int argc, char **argv)
{
	if (!init())
	{
		printf("Error: %s\n", SDL_GetError());
		return -1;
	}
	SDL_RendererInfo s;
	SDL_Window *window = SDL_CreateWindow("Fast and Dirty", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	printf("Error: %s, %p\n", SDL_GetError(), window);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_GetRendererInfo(renderer, &s);
	printf("Renderer Name: %s\n", s.name);
	printf("Error2: %s -> %p\n", SDL_GetError(), renderer);
	SDL_Surface *screen = SDL_GetWindowSurface(window);
	printf("Error2-1: %s --> %p\n", SDL_GetError(), screen);
	
	while (true)
	{
		SDL_RenderClear(renderer);
		printf("Error3: %s\n", SDL_GetError());
		SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
		printf("Error4: %s\n", SDL_GetError());
		SDL_RenderDrawRect(renderer, NULL);
		printf("Error5: %s\n", SDL_GetError());
		SDL_RenderPresent(renderer);
		printf("Error6: %s\n", SDL_GetError());
		SDL_UpdateWindowSurface(window);
		printf("Error7: %s\n", SDL_GetError());
		SDL_Delay(150);
		break;
	}
	
	SDL_Delay(3000);
	
	SDL_DestroyWindow(window);
	std::cout << "Hello world" << std::endl;
	SDL_Quit();
	return 0;
}

bool init()
{
	return SDL_Init(SDL_INIT_EVERYTHING) == 0;
}
