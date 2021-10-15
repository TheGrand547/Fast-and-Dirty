#pragma once
#ifndef IMAGE_H
#define IMAGE_H
#include <SDL2/SDL.h>
#include "Point.h"

struct Image
{
	protected:
		int height, width;
	public:
		virtual ~Image() = 0;
		// Add some overloads to this
		virtual void Draw(SDL_Renderer *renderer, Point position) = 0;
};

#endif
