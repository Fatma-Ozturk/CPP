#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal Named Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal_Copy) : type(WrongAnimal_Copy.type)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& WrongAnimal_Copy)
{
	type = WrongAnimal_Copy.type;
	std::cout << "WrongAnimal Copy Assignment Operator Called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Making Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}






//cat

WrongCat::WrongCat() : WrongAnimal(), type("WrongCat")
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& WrongCat_Copy) : type(WrongCat_Copy.type)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& WrongCat_Copy)
{
	WrongAnimal::operator=(WrongCat_Copy);
	std::cout << "WrongCat Copy Assignment Operator Called"<< std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}

std::string WrongCat::getType() const
{
	return type;
}





//dog

WrongDog::WrongDog() : WrongAnimal(), type("WrongDog")
{
	std::cout << "WrongDog Default Constructor Called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& WrongDog_Copy) : type(WrongDog_Copy.type)
{
	std::cout << "WrongDog Copy Constructor Called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& WrongDog_Copy)
{
	WrongAnimal::operator=(WrongDog_Copy);
	std::cout << "WrongDog Copy Assignment Operator Called"<< std::endl;
	return *this;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog Destructor Called" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "WOOF" << std::endl;
}

std::string WrongDog::getType() const
{
	return type;
}









