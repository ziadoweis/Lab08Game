#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>

class Mage : public ICharacter
{
    public:
        Mage(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 15;
	        m_attackPoints =  5;
	        m_defensePoints = 8;
        }

        void Attack() override {

        }

        void DamageTaken() override{

        }
        
        virtual ~Mage();

        Mage() = delete;

};