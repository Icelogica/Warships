#include "Game.h"

void Game::Update()
{
	srand(time(NULL));
}

void Game::ComposeFrame()
{
	system("CLS");
	b.Draw();
}

bool Game::GameOver()
{
	return false;
}
