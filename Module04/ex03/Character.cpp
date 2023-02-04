#include "Character.hpp"

Character::Character() : name("Anonymous")
{
	std::cout << "Character Default Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string& name) : name(name)
{
	std::cout << "Character Named Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& C_Copy) : name(C_Copy.getName())
{
	std::cout << "Character Copy Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		if (C_Copy.inventory[i])
			inventory[i] = C_Copy.inventory[i]->clone();
	}
}

Character& Character::operator=(const Character& C_Copy)
{
	std::cout << "Character Assignment Operator Called" << std::endl;
	if (this != &C_Copy)
	{
		name = C_Copy.getName();
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
			{
				delete inventory[i];
				inventory[i] = NULL;
			}
			if (C_Copy.inventory[i])
				inventory[i] = C_Copy.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character Destructor Called" << std::endl;
}

const std::string& Character::getName(void) const
{
	return name;
}

void Character::equip(AMateria* A)
{
	if(!A)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i]= A;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}