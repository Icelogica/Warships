#include <iostream>
#include "Game.h"

int main()
{
	Game game;
	bool isGameOver = false;
	
	while (!isGameOver)
	{
		game.Update();
		game.ComposeFrame();
		isGameOver = game.GameOver();
	}
	return 0;
}