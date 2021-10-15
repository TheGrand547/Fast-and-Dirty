#include "Texture.h"

Texture::Texture() : height(0), width(0), texture(NULL)
{
	
}

Texture::Texture(const std::string& string)
{
	
}

Texture::~Texture()
{
	
}

void Texture::Draw(SDL_Renderer *renderer, Point point)
{
	SDL_Rect rect = {point.x, point.y, this->width, this->height};
	SDL_RenderCopy(renderer, this->texture, NULL, &rect);
}
