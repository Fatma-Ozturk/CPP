#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie Z(name);
	Z.announce();
}