#include "Span.hpp"

int main()
{
	std::cout << "**************-Test1-***************" << std::endl;
	{
		Span S1 = Span(9);
		S1.addNumber(-8);
		S1.addNumber(-3);
		S1.addNumber(0);
		S1.addNumber(4);
		S1.addNumber(6);
		S1.addNumber(3);
		S1.addNumber(17);
		S1.addNumber(9);
		S1.addNumber(11);
		std::cout << "Shortest : " << S1.shortestSpan() << std::endl;
		std::cout << "Longest : " << S1.longestSpan() << std::endl;
	}
	std::cout << "**************-Test2-***************" << std::endl;
	try
	{
		Span S2(10000);
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		S2.addNumber(v.begin(), v.end());
		std::cout << "Shortest : " << S2.shortestSpan() << std::endl;
		std::cout << "Longest : " << S2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "**************-Test3-***************" << std::endl;
	try
	{
		Span S3(0);
		std::cout << S3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "**************-Test4-***************" << std::endl;
	try
	{
		Span S4(1);
		S4.addNumber(10);
		std::cout << S4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "**************-Test5-***************" << std::endl;
	try
	{
		Span S5(0);
		S5.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}