#include "stdafx.h"
#include "ArrowTrap.h"
#include "GameObject.h"


ArrowTrap::ArrowTrap() :
	GameObject()
{
	type = egotBase;
}


ArrowTrap::~ArrowTrap()
{
}


void ArrowTrap::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << damage;
	outputStream << "," << range;

}

void ArrowTrap::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> damage;
}