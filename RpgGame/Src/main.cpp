#include "Game.h"

int main(int argc, char* argv[])
{
	Game *game = new Game();

	const int frameRate = 60;
	const int frameDelay = 1000 / 60;

	Uint32 frameStartTime = 0;
	int frameTime = 0;

	game->Init("RPGGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while(game->IsRunning())
	{
		frameStartTime = SDL_GetTicks();

		game->HandleEvents();
		game->Update();
		game->Draw();

		frameTime = SDL_GetTicks() - frameStartTime;

		if (frameDelay > frameTime)
		{
			SDL_Delay(frameDelay - frameTime);
		}
	}

	game->clean();

	return 0;
}