#include "TextureManager.h"

SDL_Texture* TextureManager::CreateTexture(const char* filePath)
{
	SDL_Surface* surface = IMG_Load(filePath);
	SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::Renderer, surface);

	return texture;
}