#pragma once
#include "IRace.h"

class Orc :public IRace
{

public:
	Orc() : IRace(3, -3, 0) //Health, attack, defense modifications
	{

	}

    virtual ~Orc() {}
	
};