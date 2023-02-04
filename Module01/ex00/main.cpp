#include "Zombie.hpp"

int	main()
{
    Zombie ZZZ = Zombie("ozdemir"); //stack
    Zombie *heap = newZombie("fatma"); //heap

    randomChump("ozturk"); //en hızlı, stack
    ZZZ.announce();
    heap->announce();
    delete heap;

    return 0;

}