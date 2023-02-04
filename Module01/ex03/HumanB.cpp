#include "HumanB.hpp"


std::string HumanB::getName(){
	return name ;
}

void HumanB::setName(std::string name){
	this->name = name;
}

void	HumanB::setWeapon(Weapon &B)
{
	b_weapon = &B;
}

HumanB::HumanB(std::string name)
{
	setName(name);
}

HumanB::~HumanB()
{
	std::cout << name << " has died" << std::endl;
}

void HumanB::attack(){
	std::cout << getName() << " attacks with their " << b_weapon->getType() << std::endl;
}
