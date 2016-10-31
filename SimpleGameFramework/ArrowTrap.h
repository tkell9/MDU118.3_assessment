#pragma once
#include "GameObject.h"


class ArrowTrap:
	public GameObject

{

public:
	ArrowTrap();
	int damage;
	int speed;
	int range;


	~ArrowTrap();

protected:
	virtual void ArrowTrap::SaveAsText_Internal(std::ostream& outputStream);


	virtual void ArrowTrap::LoadFromText_Internal(std::istream& inputStream);


};

