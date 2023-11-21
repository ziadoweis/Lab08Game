#include <iostream>
#include <memory>
#include "ICharacter.h"
#include "CharacterCreator.h"
#include "IRace.h"
#include "AdventureParty.h"
//Races
#include "Races/DarkElf.h"
#include "Races/Khajit.h"
#include "Races/Nord.h"
#include "Races/Orc.h"
//Professions
#include "Professions/Archer.h"
#include "Professions/Assassin.h"
#include "Professions/Mage.h"
#include "Professions/Warrior.h"

int main()
{
    AdventuringParty Team1;
    AdventuringParty Team2;

    std::shared_ptr<ICharacter> T1P0 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::ArcherType, CharacterCreator::DarkElfType); 
    std::shared_ptr<Archer> ArcherTeam1 = std::dynamic_pointer_cast<Archer>(T1P0);

    std::shared_ptr<ICharacter> T1P1 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::AssassinType, CharacterCreator::KhajitType); 
    std::shared_ptr<Assassin> AssassinTeam1 = std::dynamic_pointer_cast<Assassin>(T1P1);

    std::shared_ptr<ICharacter> T1P2 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::MageType, CharacterCreator::NordType); 
    std::shared_ptr<Mage> MageTeam1 = std::dynamic_pointer_cast<Mage>(T1P2);

    std::shared_ptr<ICharacter> T1P3 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::WarriorType, CharacterCreator::OrcType); 
    std::shared_ptr<Warrior> WarriorTeam1 = std::dynamic_pointer_cast<Warrior>(T1P3);

    std::shared_ptr<ICharacter> T2P0 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::ArcherType, CharacterCreator::OrcType); 
    std::shared_ptr<Archer> ArcherTeam2 = std::dynamic_pointer_cast<Archer>(T2P0);

    std::shared_ptr<ICharacter> T2P1 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::AssassinType, CharacterCreator::NordType); 
    std::shared_ptr<Assassin> AssassinTeam2 = std::dynamic_pointer_cast<Assassin>(T2P1);

    std::shared_ptr<ICharacter> T2P2 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::MageType, CharacterCreator::KhajitType); 
    std::shared_ptr<Mage> MageTeam2 = std::dynamic_pointer_cast<Mage>(T2P2);

    std::shared_ptr<ICharacter> T2P3 = CharacterCreator::GetCharacterCreator().CreateCharacter(CharacterCreator::WarriorType, CharacterCreator::DarkElfType); 
    std::shared_ptr<Warrior> WarriorTeam2 = std::dynamic_pointer_cast<Warrior>(T2P3);

    Team1.CharacterAdd(ArcherTeam1);
    Team1.CharacterAdd(AssassinTeam1);
    Team1.CharacterAdd(MageTeam1);
    Team1.CharacterAdd(WarriorTeam1);
    Team2.CharacterAdd(ArcherTeam2);
    Team2.CharacterAdd(AssassinTeam2);
    Team2.CharacterAdd(MageTeam2);
    Team2.CharacterAdd(WarriorTeam2);

    //Battle Begins
    std::cout << "Team1 Member 0: Dark Elf Archer, Member 1: Khajit Assassin, Member 2: Nord Mage, Member 3: Orc Warrior\n";
    std::cout << "Team2 Member 0: Orc Archer, Member 1: Nord Assassin, Member 2: Khajit Mage, Member 3: Dark Elf Warrior\n" << std::endl;

    std::cout << "Team 1 Member 0's Health:"<< ArcherTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 1's Health:"<< AssassinTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 2's Health:"<< MageTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 3's Health:"<< WarriorTeam1->GetHitPoints() << std::endl; 
    std::cout << "\nTeam 2 Member 0's Health:"<< ArcherTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 1's Health:"<< AssassinTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 2's Health:"<< MageTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 3's Health:"<< WarriorTeam2->GetHitPoints() << std::endl;

    std::cout << "\nTeam 1 Member 0 Attacks Team 2 Member 0\n";
    ArcherTeam2->DamageTaken(ArcherTeam1->Attack(),ArcherTeam2->GetHitPoints());
    std::cout << "Team 2 Member 0's Health:"<< ArcherTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 1's Health:"<< AssassinTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 2's Health:"<< MageTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 3's Health:"<< WarriorTeam2->GetHitPoints() << std::endl;

    std::cout << "\nTeam 2 Member 2 Attacks All Team 1 Members\n";
    ArcherTeam1->DamageTaken(MageTeam2->Attack(),ArcherTeam1->GetHitPoints());
    AssassinTeam1->DamageTaken(MageTeam2->Attack(),AssassinTeam1->GetHitPoints());
    MageTeam1->DamageTaken(MageTeam2->Attack(),MageTeam1->GetHitPoints());
    WarriorTeam1->DamageTaken(MageTeam2->Attack(),WarriorTeam1->GetHitPoints());
    std::cout << "Team 1 Member 0's Health:"<< ArcherTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 1's Health:"<< AssassinTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 2's Health:"<< MageTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 3's Health:"<< WarriorTeam1->GetHitPoints() << std::endl;

    std::cout << "\nTeam 1 Member 0 Attacks Team 2 Member 2\n";
    MageTeam2->DamageTaken(ArcherTeam1->Attack(),MageTeam2->GetHitPoints());
    std::cout << "Team 2 Member 0's Health:"<< ArcherTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 1's Health:"<< AssassinTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 2's Health:"<< MageTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 3's Health:"<< WarriorTeam2->GetHitPoints() << std::endl;

    std::cout << "\nTeam 2 Member 3 Attacks Team 1 Member 0 \n";
    ArcherTeam1->DamageTaken(WarriorTeam2->Attack(),ArcherTeam1->GetHitPoints());
    std::cout << "Team 1 Member 0's Health:"<< ArcherTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 1's Health:"<< AssassinTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 2's Health:"<< MageTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 3's Health:"<< WarriorTeam1->GetHitPoints() << std::endl;

    std::cout << "\nTeam 1 Member 2 Attacks All Team 2 Members\n";
    ArcherTeam2->DamageTaken(MageTeam1->Attack(),ArcherTeam2->GetHitPoints());
    AssassinTeam2->DamageTaken(MageTeam1->Attack(),AssassinTeam2->GetHitPoints());
    MageTeam2->DamageTaken(MageTeam1->Attack(),MageTeam2->GetHitPoints());
    WarriorTeam2->DamageTaken(MageTeam1->Attack(),WarriorTeam2->GetHitPoints());
    std::cout << "Team 2 Member 0's Health:"<< ArcherTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 1's Health:"<< AssassinTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 2's Health:"<< MageTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 3's Health:"<< WarriorTeam2->GetHitPoints() << std::endl;

    std::cout << "\nTeam 2 Member 0 Attacks Team 1 Member 2 \n";
    MageTeam1->DamageTaken(ArcherTeam2->Attack(),MageTeam1->GetHitPoints());
    std::cout << "Team 1 Member 0's Health:"<< ArcherTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 1's Health:"<< AssassinTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 2's Health:"<< MageTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 3's Health:"<< WarriorTeam1->GetHitPoints() << std::endl;

    std::cout << "\nTeam 1 Member 3 Attacks Team 2 Member 3\n";
    WarriorTeam2->DamageTaken(WarriorTeam1->Attack(),WarriorTeam2->GetHitPoints());
    std::cout << "Team 2 Member 0's Health:"<< ArcherTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 1's Health:"<< AssassinTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 2's Health:"<< MageTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 3's Health:"<< WarriorTeam2->GetHitPoints() << std::endl;

    std::cout << "\nTeam 2 Member 1 Attacks Team 1 Member 3 \n";
    WarriorTeam1->DamageTaken(AssassinTeam2->Attack(),WarriorTeam1->GetHitPoints());
    std::cout << "Team 1 Member 0's Health:"<< ArcherTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 1's Health:"<< AssassinTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 2's Health:"<< MageTeam1->GetHitPoints() << std::endl;
    std::cout << "Team 1 Member 3's Health:"<< WarriorTeam1->GetHitPoints() << std::endl;

    std::cout << "\nTeam 1 Member 2 Attacks Team 2 Member 3\n";
    WarriorTeam2->DamageTaken(MageTeam1->Attack(),WarriorTeam2->GetHitPoints());
    std::cout << "Team 2 Member 0's Health:"<< ArcherTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 1's Health:"<< AssassinTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 2's Health:"<< MageTeam2->GetHitPoints() << std::endl;
    std::cout << "Team 2 Member 3's Health:"<< WarriorTeam2->GetHitPoints() << std::endl;


    
}
