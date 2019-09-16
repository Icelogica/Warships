#pragma once
#include <iostream>

#include "Ship.h"

class Board
{
public:
	void Draw();
	int GetSizeOfBoard();
	void PutShipToBoard(const Ship& ship);
private:
	static constexpr int boardSize = 11;
	char board[boardSize][boardSize] = {
		{' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'},
		{'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '} };
};

