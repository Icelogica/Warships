#include "Board.h"


void Board::Draw()
{
	for(int i = 0; i < boardSize; i++)
	{
		for (int j = 0; j < boardSize; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
}

int Board::GetSizeOfBoard()
{
	return boardSize;
}

void Board::PutShipToBoard(const Ship& ship)
{
	if (ship.GetHorizontalPos())
	{
		for (int i = ship.GetPositionOfShip().x; i < ship.GetPositionOfShip().x + ship.GetSizeOfShip(); i++)
		{
			if (i > boardSize - 1)
			{
				board[ship.GetPositionOfShip().y][i - ship.GetSizeOfShip() - 1] = 'X';
			}
			else
			{
				board[ship.GetPositionOfShip().y][i] = 'X';
			}
		}
	}
	else
	{
		for (int i = ship.GetPositionOfShip().y; i < ship.GetPositionOfShip().y + ship.GetSizeOfShip(); i++)
		{
			if (i > boardSize - 1)
			{
				board[i - ship.GetSizeOfShip() - 1][ship.GetPositionOfShip().x] = 'X';
			}
			else
			{
				board[i][ship.GetPositionOfShip().x] = 'X';
			}
		}
	}
}
