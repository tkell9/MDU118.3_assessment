#pragma once
#include "GameObject.h"
#include <iostream>
#include <string>

class Enemy:
	public GameObject

{
public:
	Enemy();

	int health;
	int damage;
	int range;
	int movement;
	float dodge;
	

	~Enemy();



protected:		
		virtual void Enemy::SaveAsText_Internal(std::ostream& outputStream);


		virtual void Enemy::LoadFromText_Internal(std::istream& inputStream);

	
};



