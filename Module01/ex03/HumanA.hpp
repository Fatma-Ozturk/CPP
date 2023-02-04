#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &a_weapon;
public:
	HumanA(std::string name, Weapon &A);
	~HumanA();
	void attack();
	std::string getName();
	void setName(std::string name);
};



#endif