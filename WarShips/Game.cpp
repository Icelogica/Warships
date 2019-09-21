#include "Game.h"



Game::Game()
{
	srand(time(0));
	std::cout << "Write first position between A and J" << std::endl;
	std::cout << "and second position between 0 and 9" << std::endl;
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

void Game::Update()//mechanics
{
	p.SetShootPosition();
	bPlayer.MappingShoot(p, b);
}

void Game::ComposeFrame()//visual part of game
{
	system("CLS");
	std::cout<<std::endl;
	bPlayer.Draw();
	Sleep(1000);
}

bool Game::GameOver()
{
	if (bPlayer.GetFieldNum() == b.GetFieldNum())
	{
		std::cout << std::endl;
		std::cout << "You Win" << std::endl;
		std::cout << "You shot: " << p.GetNumberOfShots() << " times.";
		return true;
	}
	else
	{
		return false;
	}
}
