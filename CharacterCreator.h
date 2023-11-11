#pragma once

#include <memory>
#include <map>

//fwd declaration
class IRace;
class ICharacter;

class CharacterCreator
{
public:
	enum enumOfCharacterType { ArcherType, AssassinType, MageType, WarriorType };
	enum raceOfCharacterType { DarkElfType, KhajitType, NordType, OrcType };


	std::shared_ptr<ICharacter>  CreateCharacter(enumOfCharacterType CharacterType, raceOfCharacterType raceType);

	static 	CharacterCreator & GetCharacterCreator();

  	CharacterCreator(const CharacterCreator &) = delete;
  	CharacterCreator & operator = (const CharacterCreator &) = delete;

private:
	std::map<raceOfCharacterType,std::shared_ptr<IRace>> m_raceMap;

	CharacterCreator();
    ~CharacterCreator();

};
