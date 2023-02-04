#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	(void)argc;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[++i])
	{
		std::string str(argv[i]);
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str << " ";
	}
	std::cout << std::endl;
	return 0;
}
