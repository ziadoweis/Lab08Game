#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>

class Assassin : public ICharacter
{
    public:
        Assassin(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 15;
	        m_attackPoints =  12; // only attack front troops
	        m_defensePoints = 5; // subtracts from attack points when hit
        }
        virtual ~Assassin();

        Assassin() = delete;

};