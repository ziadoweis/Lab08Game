#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>
#include <iostream>

class Archer : public ICharacter
{
    public:
        Archer(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 10;
	        m_attackPoints =  8;
	        m_defensePoints = 3;
        }

        int Attack() override {
            int retVal = this->GetAttackPoints();
            return retVal;
        }

        int DamageTaken(int Damage, int Health) override{
            int retVal = Damage - this->GetDefensePoints();
            std::cout << "Test1" << retVal;
            if(m_hitPoints >= retVal){
                m_hitPoints -= retVal;
            }
            else{
                
                m_hitPoints = 0;
                std::cout << "Archer has died\n";
            }

            return retVal;
        }
        
        virtual ~Archer();

        Archer() = delete;

};
