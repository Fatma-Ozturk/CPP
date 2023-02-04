#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "invalid argument count" << std::endl;
		return 1;
	}
	std::string str = static_cast<std::string>(argv[1]); //conversion


	if(!str.compare("nan") || !str.compare("nanf"))
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return 0;
	}
	
//char
	char *temp1 = argv[1];
	if(!isalpha(temp1[0]))
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << temp1 << std::endl;

	
//int
	int temp2 = static_cast<int>(atoi(temp1)); //promotion
	if(atof(temp1) > 2147483647 || atof(temp1) < -2147483648)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << temp2 << std::endl;


//float
	float temp3 = static_cast<float>(atof(temp1));//promotion
	if(isinf(temp3))
		std::cout << "float: " << "infinitive" << std::endl;
	else if(temp3 - temp2 == 0 && temp3 < 999999)
		std::cout << "float: " << temp3 << ".0f" << std::endl;
	else
		std::cout << "float: " << temp3 << "f" << std::endl;


//double
	double temp4 = static_cast<double>(temp3); //promotion
	if(isinf(temp4))
		std::cout << "double: " << "infinitive" << std::endl;
	else if (temp3 - temp2 == 0 && temp4 < 999999)
		std::cout << "double: " << temp4 << ".0" << std::endl;
	else
		std::cout << "double: " << temp4 << std::endl;
	return 0;
}
