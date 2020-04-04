#include "Game.h"

int main(int argc, char* argv[])
{
	Game *game = new Game();

	game->Init("RPGGame", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while(game->IsRunning())
	{
		game->HandleEvents();
		game->Update();
		game->Draw();
	}

	game->clean();

	return 0;
}