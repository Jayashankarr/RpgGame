#pragma once

#include "SDL.h"
class Map
{
public:
	Map();
	~Map();

	void CreateMap();
	void DrawMap();

private:
	SDL_Rect src, dest;

	SDL_Texture* dirt;
	SDL_Texture* grass;
	SDL_Texture* water;
};