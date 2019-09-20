#pragma once

class Player
{
public:
	Player() = default;
	void SetShootPosition();
	char GetLetterPos() const;
	char GetNumberPos() const;
	int GetNumberOfShots() const;
private:
	char letterPos;
	char numberPos;
	int numberofShots = 0;
};
