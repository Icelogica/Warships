#include "Board.h"

void Board::Draw()
{
	for(int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
}
