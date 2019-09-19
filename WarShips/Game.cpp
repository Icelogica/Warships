#include "Game.h"



Game::Game()
{
	srand(time(0));

	for (int i = 0; i < nShip; i++)
	{
		ships[i] = Ship(Vec2(RadnomPosition(), RadnomPosition()), i + 1);
		b.PutShip(ships[i]);
	}
}

int Game::RadnomPosition()
{
	return (rand() % b.GetSizeOfBoard()) + 1;
}

void Game::Update()
{
	p.SetShootPosition();
	bPlayer.MappingShoot(p, b);
}

void Game::ComposeFrame()
{
	system("CLS");
	b.Draw();
	std::cout<<std::endl;
	bPlayer.Draw();
	Sleep(1000);
}

bool Game::GameOver()
{
	if (bPlayer.GetFieldNum() == b.GetFieldNum())
	{
		std::cout << "You Win" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}
