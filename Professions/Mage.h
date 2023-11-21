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
	        m_attackPoints =  10;
	        m_defensePoints = 5;
        }

        int Attack() override {
            int retVal = this->GetAttackPoints();
            return retVal;
        }

        void DamageTaken(int Damage, int Health) override{
            int retVal = Damage - this->GetDefensePoints();
            if(Health - retVal > 0){
                m_hitPoints -= retVal;
            }
            else if(Health - retVal <= 0)
            {
                m_hitPoints -= retVal;
                std::cout << "Mage has Died\n";
            }
            else{
                std::cout << "Mage is already dead.\n";
            }

        }
        
        virtual ~Mage();

        Mage() = delete;

};