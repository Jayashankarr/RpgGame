#pragma once
#include "SDL.h"

class Game
{
public:
	Game();
	~Game();

	void Init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void Update();
	void HandleEvents();
	void Draw();
	void clean();

	bool IsRunning() { return isRunning; }

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;

};
