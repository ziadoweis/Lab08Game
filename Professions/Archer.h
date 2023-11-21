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
            m_hitPoints = 12;
	        m_attackPoints =  12;
	        m_defensePoints = 8;
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
                std::cout << "Archer has Died\n";
            }
            else{
                std::cout << "Archer is already dead.\n";
            }

        }
        
        virtual ~Archer();

        Archer() = delete;

};
