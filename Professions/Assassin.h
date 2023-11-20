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
            m_hitPoints = 15;
	        m_attackPoints =  12; // only attack front troops
	        m_defensePoints = 5; // subtracts from attack points when hit
        }

        int Attack() override {
            int retVal = this->GetAttackPoints();
            m_hitPoints -= retVal;
            return retVal;
        }

        int DamageTaken(int Damage, int Health) override{
            int retVal = Damage - this->GetDefensePoints();
            if(Health - retVal > 0){
                m_hitPoints -= retVal;
            }
            else{
                std::cout << "Assassin has Died\n";
            }
            return retVal;
        }
        
        virtual ~Assassin();

        Assassin() = delete;

};