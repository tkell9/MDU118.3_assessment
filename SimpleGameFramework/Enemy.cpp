#include "stdafx.h"
#include "Enemy.h"
#include "GameObject.h"


Enemy::Enemy():
	GameObject()
{
	type = egotEnemy;
}


Enemy::~Enemy()
{
}


void Enemy::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << health;
	outputStream << "," << damage;
	outputStream << "," << range;
	outputStream << "," << movement;
	outputStream << "," << dodge;
}

void Enemy::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> health;
}