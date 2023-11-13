#pragma once
#include "IRace.h"

class Nord : public IRace
{

public:
	Nord() : IRace(0, 0, 0) //Health, attack, defense modifications
	{

	}
    virtual ~Nord() {}
	
};