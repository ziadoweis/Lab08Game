#pragma once
#include "IRace.h"

class Orc : public IRace
{

public:
	Orc() : IRace(5, -5, 0) //Health, attack, defense modifications
	{

	}
    virtual ~Orc() {}
	
};