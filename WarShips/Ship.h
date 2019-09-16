#pragma once
#include <random>
#include <ctime>
#include "Vec2.h"

class Ship
{
public:
	Ship() = default;
	Ship(Vec2 pos, int shipLenght_in);
private:
	Vec2 position;
	bool horizontalPosition = false;
	int shipLenght = 0;
};

