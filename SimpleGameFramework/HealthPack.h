#pragma once
#include "GameObject.h"
#include <iostream>
#include <string>


class HealthPack :  
	public GameObject

{
public:
	HealthPack();

	int healAmt;

	~HealthPack();

protected:
	virtual void HealthPack::SaveAsText_Internal(std::ostream& outputStream);


	virtual void HealthPack::LoadFromText_Internal(std::istream& inputStream);

};

