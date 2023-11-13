#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>

class Warrior : public ICharacter
{
    public:
        Warrior(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 20;
	        m_attackPoints =  5;
	        m_defensePoints = 8;
        }
        virtual ~Warrior();

        Warrior() = delete;

};