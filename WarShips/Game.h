#pragma once
#include <stdlib.h>
#include <random>
#include <ctime>

#include "Board.h"
#include "Ship.h"

class Game
{
public:
	Game();
	void Update();
	void ComposeFrame();
	bool GameOver();
private:
	static constexpr int nShip = 5;
	Board b;
	Ship ships[nShip];
};

