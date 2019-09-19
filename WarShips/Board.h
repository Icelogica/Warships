#pragma once
#include <iostream>

#include "Ship.h"
#include "Player.h"

class Player;

class Board
{
public:
	void Draw();
	char ReturnPos(Vec2 pos) const;
	int GetSizeOfBoard();
	int GetFieldNum() const;
	void PutShip(Ship ship);
	void MappingShoot(Player& player, const Board& b);
	bool CheckingCollision(Ship& ship) const;
private:
	void ConvertingCharToInt(Player player);
	static constexpr int boardSize = 11;
	char board[boardSize][boardSize] = {
		{' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'},
		{'0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '} };
	Vec2 shootPos;
	int fieldNum = 0;
};


