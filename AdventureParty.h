#pragma once
#include <vector>
#include <memory>

class ICharacter;

class AdventuringParty{
private: 
    std::vector<std::shared_ptr<ICharacter>> FrontRow;
    std::vector<std::shared_ptr<ICharacter>> BackRow;

public:

    void CharacterAdd(std::shared_ptr<ICharacter> Character) {
        if (FrontRow.size() < 2) {
            FrontRow.push_back(Character);
        } 

        else if (BackRow.size() < 2) {
            BackRow.push_back(Character);
        } 
    }

    void FullPartyAttack(){}

};