#pragma once
#include <stdlib.h>
#include "Board.h"

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

