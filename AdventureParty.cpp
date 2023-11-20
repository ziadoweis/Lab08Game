#include "AdventureParty.h"

 void AdventuringParty::CharacterAdd(std::shared_ptr<ICharacter> Character){
    if (FrontRow.size() < 2) {
        FrontRow.push_back(Character);
    } 
    else if (BackRow.size() < 2) {
        BackRow.push_back(Character);
    }
    else{
        std::cout << "Party is Full. \n";
    }
 }

//  void AdventuringParty::FullPartyAttack(){
//     for (const auto& Character : FrontRow) {
//         if (Character->GetHitPoints() > 0){
//             Character->Attack();
//         }
//         else if(Character->GetHitPoints() == 0){
//             std::cout <<"Character is Dead. \n";
//         }
//     }
//     for (const auto& Character : BackRow) {
//         if (Character->GetHitPoints() > 0){
//             Character->Attack();
//         }
//         else if(Character->GetHitPoints() == 0){
//             std::cout <<"Character is Dead. \n";
//         }
//     }
// }

//  void AdventuringParty::SinglePartyAttack(int EnemyLocation){
//     if (EnemyLocation >= 0 && EnemyLocation < FrontRow.size()) {
//         FrontRow[EnemyLocation]->Attack();
//     } 
//     else if (EnemyLocation >= 0 && EnemyLocation < FrontRow.size() + BackRow.size()) {
//         EnemyLocation -= FrontRow.size();
//         BackRow[EnemyLocation]->Attack();
//     } 
//     else {
//         std::cout << "Invalid enemy location.\n";
//     }
//  }

