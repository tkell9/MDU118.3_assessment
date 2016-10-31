#include "stdafx.h"
#include "Boost.h"
#include "GameObject.h"


Boost::Boost() :
	GameObject()
{
	type = egotBase;
}


Boost::~Boost()
{
}

void Boost::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << range;
	outputStream << "," << speedBoost;
	outputStream << "," << duration;
}

void Boost::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> range;
}