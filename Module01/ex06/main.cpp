#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong argument count" << std::endl;
		return 1;
	}
	Harl H;
	H.complain(argv[1]);
	return 0;
}