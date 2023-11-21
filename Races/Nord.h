#pragma once
#include "IRace.h"

class Nord : public IRace
{

public:
	Nord() : IRace(2, 2, 2) //Health, attack, defense modifications
	{

	}
    virtual ~Nord() {}
	
};