#include "Ship.h"

Ship::Ship(Vec2 pos, int shipLenght_in)
	:
	position(pos),
	shipLenght(shipLenght_in)
{
	if (rand() % 2 == 0)
	{
		horizontalPosition = false;
	}
	else
	{
		horizontalPosition = true;
	}
}

Vec2 Ship::GetPositionOfShip()
{
	return position;
}

int Ship::GetSizeOfShip()
{
	return shipLenght;
}

bool Ship::GetHorizontalPos()
{
	return horizontalPosition;
}
