#include "stdafx.h"
#include "Spike.h"
#include "GameObject.h"


Spike::Spike():
	GameObject()
{
	type = egotBase;
}


Spike::~Spike()
{
}

void Spike::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << damage;
	outputStream << "," << range;
}

void Spike::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> damage;
}