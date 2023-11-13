#pragma once
#include "IRace.h"

class DarkElf : public IRace
{

public:
	DarkElf() : IRace(-5, 5, 0) //Health, attack, defense modifications
	{

	}
    virtual ~DarkElf() {}
	
};