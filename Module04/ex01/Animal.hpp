#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

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
private:
	Brain* CatBrain;
public:
	Cat();
	Cat(const Cat& Cat_Copy);
	Cat& operator=(const Cat& Cat_Copy);
	~Cat();

	void	makeSound() const;
	Brain* get_CatBrain() const;
};

class Dog:	public Animal
{
private:
	Brain* DogBrain;
public:
	Dog();
	Dog(const Dog& Dog_Copy);
	Dog& operator=(const Dog& Dog_Copy);
	~Dog();

	void	makeSound() const;
	Brain* get_DogBrain() const;
};



#endif