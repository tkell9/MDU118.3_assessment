#include "stdafx.h"
#include "Player.h"
#include "GameObject.h"


Player::Player():
	GameObject()
{
	type = egotBase;
}


Player::~Player()
{
}

void Player::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << health;
	outputStream << "," << damage;
	outputStream << "," << weapon;
	outputStream << "," << range;
	outputStream << "," << movement;
	outputStream << "," << dodge;
}

void Player::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> damage;
}