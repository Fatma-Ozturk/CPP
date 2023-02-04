#include <iostream>
#include "Array.hpp"


int main()
{
	Array<int> numbers(3);//operator[] class numbers() için çağrılacak
	int *numbers2 = new int[3];//burada operator[] kullanılmayacak
	numbers[0] = 3;
	numbers[1] = 2;
	numbers[2] = 1;

	numbers2[0] = 3;
	numbers2[1] = 2;
	numbers2[2] = 1;
	std::cout << "numbers[2] = " << numbers[2] << std::endl;
	std::cout << "numbers2[2] = " << numbers2[2] << std::endl;
	std::cout << "numbers[1] = " << numbers[1] << std::endl;
	std::cout << "numbers2[1] = " << numbers2[1] << std::endl;
	std::cout << "numbers[0] = " << numbers[0] << std::endl;
	std::cout << "numbers2[0] = " << numbers2[0] << std::endl;
	std::cout << std::endl;
	
	{	
		Array<int> tmp = numbers;
		std::cout << "tmp[2] = " << tmp[2] << std::endl;
		std::cout << "tmp[1] = " << tmp[1] << std::endl;
		std::cout << "tmp[0] = " << tmp[0] << std::endl;
		std::cout << std::endl;

		Array<int> test(tmp);
		std::cout << "test[2] = " << test[2] << std::endl;
		std::cout << "test[1] = " << test[1] << std::endl;
		std::cout << "test[0] = " << test[0] << std::endl;
		std::cout << std::endl;
		std::cout << "size of test " << test.size() << std::endl;

	}

	//index < 0
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	//index > 4
	try
	{
		numbers[9] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	delete[] numbers2;
	std::cout << std::endl;
	{
		const Array<int> a(5);
		std::cout << "a[0] = " << a[0] << std::endl;
	}
	return 0;
}
