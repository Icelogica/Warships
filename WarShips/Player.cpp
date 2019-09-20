#include <iostream>
#include "Player.h"

void Player::SetShootPosition()
{
	std::cout<<std::endl;
	std::cin >> letterPos;
	std::cin >> numberPos;
	numberofShots++;
}

char Player::GetLetterPos() const
{
	return letterPos;
}

char Player::GetNumberPos() const
{
	return numberPos;
}

int Player::GetNumberOfShots() const
{
	return numberofShots;
}
