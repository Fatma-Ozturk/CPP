#include "Animal.hpp"

//Animal class

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal Named Constructor Called" << std::endl;
}

Animal::Animal(const Animal& Animal_Copy) : type(Animal_Copy.type)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

Animal& Animal::operator=(const Animal& Animal_Copy)
{
	type = Animal_Copy.type;
	std::cout << "Animal Copy Assignment Operator Called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Making Sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}



//Cat Class

Cat::Cat() : Animal()
{
	Animal::type = "Cat";
	CatBrain = new Brain;
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat& Cat_Copy)
{
	Animal::type = Cat_Copy.type;
	CatBrain = new Brain(*Cat_Copy.get_CatBrain());
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat& Cat::operator=(const Cat& Cat_Copy)
{
	Animal::operator=(Cat_Copy);
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

Dog::Dog() : Animal()
{
	Animal::type = "Dog";
	DogBrain = new Brain;
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog& Dog_Copy)
{
	Animal::type = Dog_Copy.type;
	DogBrain = new Brain(*Dog_Copy.get_DogBrain());
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog& Dog::operator=(const Dog& Dog_Copy)
{
	Animal::operator=(Dog_Copy);
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





