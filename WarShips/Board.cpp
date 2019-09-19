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

char Board::ReturnPos(Vec2 pos) const
{
	return board[pos.y][pos.x];
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

void Board::MappingShoot(Player& player, const Board& b)
{
	ConvertingCharToInt(player);
	if (b.ReturnPos(shootPos) == 'X')
	{
		board[shootPos.y][shootPos.x] = 'X';
	}
	else if (b.ReturnPos(shootPos) == ' ')
	{
		board[shootPos.y][shootPos.x] = 'O';
	}
	else
	{
		std::cout << "Out of range!" << std::endl;
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

void Board::ConvertingCharToInt(Player player)
{
	for (int i = 1; i < boardSize; i++)
	{
		if (player.GetLetterPos() == board[0][i])
		{
			shootPos.x = i;
		}
		if (player.GetNumberPos() == board[i][0])
		{
			shootPos.y = i;
		}
	}

}

void Player::SetShootPosition()
{
	std::cin >> letterPos;
	std::cin >> numberPos;
}

char Player::GetLetterPos()
{
	return letterPos;
}

char Player::GetNumberPos()
{
	return numberPos;
}
