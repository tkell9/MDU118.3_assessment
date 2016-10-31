#include "stdafx.h"
#include "Key.h"
#include "GameObject.h"


Key::Key() :
	GameObject()
{
	type = egotBase;
}


Key::~Key()
{
}

void Key::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << active;
	outputStream << "," << type;

}

void Key::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> active;
}