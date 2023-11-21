#pragma once

#include "IRace.h"
#include "ICharacter.h"
#include <memory>
#include <iostream>

class Warrior : public ICharacter
{
    public:
        Warrior(std::shared_ptr<IRace> Race) : ICharacter(Race)
        {
            m_hitPoints = 20;
	        m_attackPoints =  5;
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
                std::cout << "Warrior has Died\n";
            }
            else{
                std::cout << "Warrior is already dead.\n";
            }

        }

        virtual ~Warrior();

        Warrior() = delete;

};