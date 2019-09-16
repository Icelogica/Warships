#pragma once
#include <stdlib.h>
#include <random>
#include <ctime>

#include "Board.h"
#include "Ship.h"

class Game
{
public:
	Game() = default;
	void Update();
	void ComposeFrame();
	bool GameOver();
private:
	Board b;
};

