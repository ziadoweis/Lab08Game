#pragma once

#include "IRace.h"
#include <memory>

class ICharacter
{
public:

    ICharacter(std::shared_ptr<IRace> race) : m_hitPoints(0), m_attackPoints(0), m_defensePoints(0), m_race(race)
    {

    }

    virtual int GetHitPoints() 
    {
        int retVal = m_hitPoints + m_race->GetHitPointsMod();
        return retVal;
    }

    virtual int GetAttackPoints() 
    {
        int retVal = m_attackPoints + m_race->GetAttackPointsMod();
        return retVal;
    }

    virtual int GetDefensePoints() 
    {
        int retVal = m_defensePoints + m_race->GetDefensePointsMod();
        return retVal;
    }

    virtual void Attack() = 0;
    
    virtual void DamageTaken() = 0;
    
    virtual ~ICharacter() {}

protected:
	int m_hitPoints;
	int m_attackPoints;
	int m_defensePoints;
	std::shared_ptr<IRace> m_race;
};