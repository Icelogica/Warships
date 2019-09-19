#pragma once

class Player
{
public:
	Player() = default;
	void SetShootPosition();
	char GetLetterPos() const;
	char GetNumberPos() const;
private:
	char letterPos;
	char numberPos;;
};
