#pragma once
#include "GameObject.h"
#include <iostream>
#include <string>

class Key:
	public GameObject

{
public:
	Key();
	
	bool active;
	int  type;

	~Key();

protected:
	virtual void Key::SaveAsText_Internal(std::ostream& outputStream);


	virtual void Key::LoadFromText_Internal(std::istream& inputStream);
};

