#include "Surface.h"

Surface::Surface() : Image(), surface(NULL), texture()
{
	
}

Surface::~Surface()
{
	SDL_FreeSurface(this->surface);
}

void Surface::Draw(SDL_Renderer *renderer, Point position)
{
	
}
