#include "Game.h"



Game::Game()
{
	srand(time(NULL));

	for (int i = 0; i < nShip; i++)
	{
		ships[i] = Ship(Vec2(RadnomPosition(), RadnomPosition()), i + 1);
		std::cout << ships[i].GetPositionOfShip().x << " " << ships[i].GetPositionOfShip().y << std::endl;
		b.PutShipToBoard(ships[i]);
	}
}

int Game::RadnomPosition()
{
	return (rand() % b.GetSizeOfBoard()) + 1;
}

void Game::Update()
{
	srand(time(NULL));
}

void Game::ComposeFrame()
{
	system("CLS");
	b.Draw();
	Sleep(1000);
}

bool Game::GameOver()
{
	return false;
}
