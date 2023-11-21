#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>
#include <iostream>

class Assassin : public ICharacter
{
    public:
        Assassin(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 8;
	        m_attackPoints =  14;
	        m_defensePoints = 8; 
        }

        int Attack() override {
            int retVal = this->GetAttackPoints();
            m_hitPoints -= retVal;
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
                std::cout << "Assassin has Died\n";
            }
            else{
                std::cout << "Assassin is already dead.\n";
            }

        }
        
        virtual ~Assassin();

        Assassin() = delete;

};