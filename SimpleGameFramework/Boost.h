#pragma once
#include "GameObject.h"
#include <iostream>
#include <string>
#include <fstream>

class Boost :
	public GameObject

{
public:
	Boost();
	int range;
	int speedBoost;
	int duration;


	~Boost();



protected:
	virtual void Boost::SaveAsText_Internal(std::ostream& outputStream);


	virtual void Boost::LoadFromText_Internal(std::istream& inputStream);


};