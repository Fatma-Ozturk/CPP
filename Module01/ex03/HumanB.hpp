#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *b_weapon;
public:
	HumanB(std::string b_name);
	~HumanB();
	void attack();
	std::string getName();
	void setWeapon(Weapon &B);
	void setName(std::string name);
};


#endif