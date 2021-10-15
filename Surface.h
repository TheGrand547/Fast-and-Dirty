#pragma once
#ifndef SURFACE_H
#define SURFACE_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Image.h"


class Surface : public Image
{
	protected:
		SDL_Surface* surface;
}

#endif
