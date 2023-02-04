#include "Zombie.hpp"

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string name){
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;	
}