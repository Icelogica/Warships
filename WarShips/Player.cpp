#include <iostream>
#include "Player.h"

void Player::SetShootPosition()
{
	std::cin >> letterPos;
	std::cin >> numberPos;
}

char Player::GetLetterPos() const
{
	return letterPos;
}

char Player::GetNumberPos() const
{
	return numberPos;
}