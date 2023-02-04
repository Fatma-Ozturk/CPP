#include "iter.hpp"

int main()
{
	{
		char str[] = {'a', 'b', 'c', 'd', 'e'};
		::iter(str, 5, call);
	}
	std::cout << std::endl;
	{
		int array[] = {0, 1, 2, 3, 4, 5};
		::iter(array, 6, call);
	}
	std::cout << std::endl;
	{
		std::string arr[] = {"bir", "iki", "üç"};
		::iter(arr, 3, call);
	}
	std::cout << std::endl;
	{
		float f[] = {42.2f, 42.1f};
		::iter(f, 2, call);
	}
	std::cout << std::endl;
	{
		double d[] = {1.2, 1.3};
		::iter(d, 2, call);
	}
	std::cout << std::endl;
	return 0;
}
