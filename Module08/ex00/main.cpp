#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>


int	main()
{
	try
	{
		std::vector<int> v1(2,10);
		std::cout << *easyfind(v1, 10) << std::endl;
		v1.push_back(99);
		v1.push_back(3);
		std::cout << *easyfind(v1, 3) << std::endl;
		std::cout << *easyfind(v1, 23) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::deque<int> d1;
		d1.push_back(44);
		d1.push_back(22);
		std::cout << *easyfind(d1, 44) << std::endl;
		std::cout << *easyfind(d1, 23) << std::endl;
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::list<int> l1;
		l1.push_back(23);
		l1.push_back(32);
		std::cout << *easyfind(l1, 23) << std::endl;
		std::cout << *easyfind(l1, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}