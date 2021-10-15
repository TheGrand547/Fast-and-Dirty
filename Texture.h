#pragma once
#ifndef TEXTURE_H
#define TEXTURE_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include "Image.h"
#include "Point.h"

class Texture : public Image
{
	protected:
		SDL_Texture *texture;
		int width, height;
	public:
		Texture();
		Texture(const std::string& string);
		virtual ~Texture();
		void Draw(SDL_Renderer *renderer, Point point) override;
		
		// friend SDL_Render overload this please
};

#endif
