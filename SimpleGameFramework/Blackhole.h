#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "GameObject.h"

class Blackhole:
	public GameObject

{
public:
	Blackhole();
	int damage;
	int range;

	~Blackhole();

protected:
	virtual void Blackhole::SaveAsText_Internal(std::ostream& outputStream);


	virtual void Blackhole::LoadFromText_Internal(std::istream& inputStream);
};
