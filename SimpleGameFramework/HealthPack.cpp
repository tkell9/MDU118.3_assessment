#include "stdafx.h"
#include "HealthPack.h"
#include "GameObject.h"


HealthPack::HealthPack() :
	GameObject()
{
	type = egotBase;
}


HealthPack::~HealthPack()
{
}

void HealthPack::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << healAmt;

}

void HealthPack::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> healAmt;
}