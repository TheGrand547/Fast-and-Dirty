#pragma once
#ifndef SURFACE_H
#define SURFACE_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Image.h"
#include "Texture.h"

class Surface : public Image
{
	protected:
		SDL_Surface* surface;
		Texture texture;
	public:
		Surface();
		~Surface();
		void Draw(SDL_Renderer *renderer, Point position);
};
#endif
