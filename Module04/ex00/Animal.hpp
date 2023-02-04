#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& Animal_Copy);
	Animal& operator=(const Animal& Animal_Copy);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

class Cat:	public Animal
{
public:
	Cat();
	Cat(const Cat& Cat_Copy);
	Cat& operator=(const Cat& Cat_Copy);
	~Cat();

	void	makeSound() const;
};

class Dog:	public Animal
{
public:
	Dog();
	Dog(const Dog& Dog_Copy);
	Dog& operator=(const Dog& Dog_Copy);
	~Dog();

	void	makeSound() const;
};



#endif