#pragma once
#include "GameObject.h"
#include <iostream>
#include <string>

class Player:
	public GameObject

{
private :
	Player();
	//Player settings
		int health;
		int damage;
		int weapon;
		int range;
		int movement;
		float dodge;
		int keyType;

	//Player states
		bool isMoving;					//Checks whether the player is moving
		bool isAttacking;				//Checks whether the player is attacking an enemy
		bool isMenuShowing;				//Checks whether the a menu is open and preventing the players movement
		bool hasKey;					//Checks whether the player has a key


		
	~Player();

protected:
	virtual void Player::SaveAsText_Internal(std::ostream& outputStream);


	virtual void Player::LoadFromText_Internal(std::istream& inputStream);
};

