#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &A) : a_weapon(A) //A initialize
{
	setName(name);
}

std::string HumanA::getName(){
	return name ;
}

void HumanA::setName(std::string name){
	this->name = name;
}

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << a_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << name << " has died" << std::endl;
}