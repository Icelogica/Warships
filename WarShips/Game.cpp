#include "Game.h"

Game::Game()
{
	srand(time(NULL));

	for (int i = 0; i < nShip; i++)
	{
		ships[i] = Ship(Vec2(rand() % b.GetSizeOfBoard(), rand() % b.GetSizeOfBoard()), i + 1);
	}
}

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
