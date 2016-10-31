#pragma once
#include "GameObject.h"
#include <iostream>
#include <string>

class Spike:
	public GameObject

{ 
public:
	Spike();

	int damage;
	int range;

	~Spike();

protected:
	virtual void Spike::SaveAsText_Internal(std::ostream& outputStream);


	virtual void Spike::LoadFromText_Internal(std::istream& inputStream);

};

