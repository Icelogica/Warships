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

void Board::PutShip(Ship& ship)
{
	while (CheckingCollision(ship))//ships collision
	{
		int x = rand() %(boardSize - 2) + 1;
		int y = rand() %(boardSize - 2) + 1;
		ship.RestartShipPosition(x, y);
	}

	if (ship.GetHorizontalPos())
	{
		for (int i = ship.GetPositionOfShip().x; i < ship.GetPositionOfShip().x + ship.GetSizeOfShip(); i++)
		{
			board[ship.GetPositionOfShip().y][i] = 'X';
		}
	}
	else
	{
		for (int i = ship.GetPositionOfShip().y; i < ship.GetPositionOfShip().y + ship.GetSizeOfShip(); i++)
		{
			board[i][ship.GetPositionOfShip().x] = 'X';
		}
	}
}

bool Board::CheckingCollision(Ship& ship) const
{
	if (ship.GetHorizontalPos())
	{
		for (int i = ship.GetPositionOfShip().x; i < ship.GetPositionOfShip().x + ship.GetSizeOfShip(); i++)
		{
			if (i > boardSize - 1)
			{
				return true;
			}
			else if (board[ship.GetPositionOfShip().y][i] == 'X')
			{
				return true;
			}
			
			
		}
		return false;
	}
	else
	{
		for (int i = ship.GetPositionOfShip().y; i < ship.GetPositionOfShip().y + ship.GetSizeOfShip(); i++)
		{
			if (i > boardSize - 1)
			{
				return true;
			}
			else if (board[i][ship.GetPositionOfShip().x] == 'X')
			{
				return true;
			}
		}
		return false;
	}
}
