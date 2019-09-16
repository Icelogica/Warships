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
