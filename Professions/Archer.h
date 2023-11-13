#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>

class Archer : public ICharacter
{
    public:
        Archer(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 10;
	        m_attackPoints =  8;
	        m_defensePoints = 3;
        }
        virtual ~Archer();

        Archer() = delete;

};
