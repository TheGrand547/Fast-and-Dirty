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
	SDL_Window *window = SDL_CreateWindow("Fast and Dirty", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	printf("Error35:\n ->%s\n", SDL_GetError());
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);	
	printf("Error2: %s %p\n", SDL_GetError(), window);
	
	while (true)
	{
		SDL_RenderClear(renderer);
		SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
		//SDL_RenderDrawRect(renderer, NULL);
		SDL_RenderPresent(renderer);
		//SDL_UpdateWindowSurface(window);
		//printf("Error3: %s\n", SDL_GetError());
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
