#pragma once
#include <vector>
#include <memory>
#include "ICharacter.h"
#include <iostream>

class ICharacter;

class AdventuringParty{
private: 
    std::vector<std::shared_ptr<ICharacter>> FrontRow;
    std::vector<std::shared_ptr<ICharacter>> BackRow;

public:

    void CharacterAdd(std::shared_ptr<ICharacter> Character);

    // void FullPartyAttack();

    // void SinglePartyAttack(int EnemyLocation);


};