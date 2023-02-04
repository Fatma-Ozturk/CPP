#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	//zombi yarat, adlandır.
	return (new Zombie(name));

}
