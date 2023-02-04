#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& WrongAnimal_Copy);
	WrongAnimal& operator=(const WrongAnimal& WrongAnimal_Copy);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};


class WrongCat: public WrongAnimal
{
private:
	std::string type;
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& WrongCat_Copy);
	WrongCat& operator=(const WrongCat& WrongCat_Copy);
	~WrongCat();

	void	makeSound() const;
	std::string getType() const;
};


class WrongDog: public WrongAnimal
{
private:
	std::string type;
public:
	WrongDog();
	WrongDog(std::string type);
	WrongDog(const WrongDog& WrongDog_Copy);
	WrongDog& operator=(const WrongDog& WrongDog_Copy);
	~WrongDog();

	void	makeSound() const;
	std::string getType() const;
};

#endif