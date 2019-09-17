#include "Ship.h"

Ship::Ship(Vec2 pos, int shipLenght_in)
	:
	position(pos),
	shipLenght(shipLenght_in)
{
	SettingRandHoriontalPos();
}

Vec2 Ship::GetPositionOfShip() const
{
	return position;
}

int Ship::GetSizeOfShip() const
{
	return shipLenght;
}

void Ship::RestartShipPosition(int positionX, int positionY)
{
	position = Vec2(positionX, positionY);
	SettingRandHoriontalPos();
}

bool Ship::GetHorizontalPos() const
{
	return horizontalPosition;
}

void Ship::SettingRandHoriontalPos()
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
