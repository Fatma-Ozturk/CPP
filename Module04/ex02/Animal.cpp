#include "Animal.hpp"

//Animal class

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "AAnimal Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal Named Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& AAnimal_Copy) : type(AAnimal_Copy.type)
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& AAnimal_Copy)
{
	type = AAnimal_Copy.type;
	std::cout << "AAnimal Copy Assignment Operator Called" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}


//Cat Class

Cat::Cat() : AAnimal()
{
	AAnimal::type = "Cat";
	CatBrain = new Brain;
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat& Cat_Copy)
{
	AAnimal::type = Cat_Copy.type;
	CatBrain = new Brain(*Cat_Copy.get_CatBrain());
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& Cat_Copy)
{
	AAnimal::operator=(Cat_Copy);
	if(this != &Cat_Copy)
	{
		delete CatBrain;
		CatBrain = new Brain(*Cat_Copy.get_CatBrain());
	}
	std::cout << "Cat Copy Assignment Operator Called"<< std::endl;
	return *this;
}

Cat::~Cat()
{
	delete CatBrain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}

Brain* Cat::get_CatBrain() const
{
	return CatBrain;
}



//Dog Class

Dog::Dog() : AAnimal()
{
	AAnimal::type = "Dog";
	DogBrain = new Brain;
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog& Dog_Copy)
{
	AAnimal::type = Dog_Copy.type;
	DogBrain = new Brain(*Dog_Copy.get_DogBrain());
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog& Dog_Copy)
{
	AAnimal::operator=(Dog_Copy);
	if(this != &Dog_Copy)
	{
		delete DogBrain;
		DogBrain = new Brain(*Dog_Copy.get_DogBrain());
	}
	std::cout << "Dog Copy Assignment Operator Called"<< std::endl;
	return *this;
}

Dog::~Dog()
{
	delete DogBrain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WOOF" << std::endl;
}

Brain* Dog::get_DogBrain() const
{
	return DogBrain;
}
