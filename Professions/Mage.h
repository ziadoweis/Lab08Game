#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>
#include <iostream>

class Mage : public ICharacter
{
    public:
        Mage(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 15;
	        m_attackPoints =  5;
	        m_defensePoints = 8;
        }

        int Attack() override {
            int retVal = this->GetAttackPoints();
            return retVal;
        }

        int DamageTaken(int Damage, int Health) override{
            int retVal = Damage - this->GetDefensePoints();
            if(Health - retVal > 0){
                m_hitPoints -= retVal;
            }
            else{
                std::cout << "Mage has Died\n";
            }
            return retVal;
        }
        
        virtual ~Mage();

        Mage() = delete;

};