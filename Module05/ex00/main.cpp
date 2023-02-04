#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b1("b1", 150);
	Bureaucrat b2("b2", 1);
	Bureaucrat b3("b3", 10);
	Bureaucrat b4(b3);
	Bureaucrat b5;
	b4 = b5;

	std::cout << std::endl;
	
	try
	{
		Bureaucrat b6("b6", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b7("b7", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;
	std::cout << b5 << std::endl;
	std::cout << std::endl;

	try
	{

		std::cout << "************TEST1***********" << std::endl;
		b1.decrementGrade();

		std::cout << b1 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "***********TEST2************" << std::endl;
		b2.incrementGrade();
		std::cout << b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		std::cout << "************TEST3***********" << std::endl;
		b3.incrementGrade();
		std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "************TEST4***********" << std::endl;
		b4.decrementGrade();
		std::cout << b4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}