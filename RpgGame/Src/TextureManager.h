#pragma once
#include "SDL.h"
#include "SDL_image.h"

class TextureManager
{
public:
	//TextureManager();
	//~TextureManager();

	SDL_Texture* CreateTexture(const char* fileName, SDL_Renderer* renderer);

private:

};