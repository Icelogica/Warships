#include <iostream>
#include "Player.h"

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