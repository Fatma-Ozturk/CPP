#include "Zombie.hpp"

int	main()
{
    Zombie *tmp = zombieHorde(5, "fatma"); //heap

    for (int i = 0; i < 5; i++)
		tmp[i].announce();
	delete []tmp;
    return 0;
}