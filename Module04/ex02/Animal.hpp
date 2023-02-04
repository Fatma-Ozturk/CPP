#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& AAnimal_Copy);
	AAnimal& operator=(const AAnimal& AAnimal_Copy);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;
	std::string getType() const;
};



class Cat:	public AAnimal
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



class Dog:	public AAnimal
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