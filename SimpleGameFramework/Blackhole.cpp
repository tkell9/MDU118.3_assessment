#include "stdafx.h"
#include "Blackhole.h"
#include "GameObject.h"


Blackhole::Blackhole() :
	GameObject()
{
	type = egotBase;
}


Blackhole::~Blackhole()
{
}

void Blackhole::SaveAsText_Internal(std::ostream& outputStream)
{	
	outputStream << "," << damage;
	outputStream << "," << range;
}

void Blackhole::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> damage;
}