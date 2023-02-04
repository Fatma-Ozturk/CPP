#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private :
	std::string name;
	AMateria* inventory[4];
public :
	Character();
	Character(const std::string& name);
	Character(const Character& C_Copy);
	Character& operator=(const Character& C_Copy);
	~Character();

	const std::string& getName(void) const;
	void equip(AMateria* A);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif