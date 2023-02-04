#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	{
		std::cout << "****************---ANIMAL---*********************" << std::endl;
		std::cout << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;

		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete j;
		delete i;
		delete meta;
		std::cout << std::endl;
	}
	{
		std::cout << "****************---ADDITIONALTESTS---*********************" << std::endl;
		Animal* a = new Cat();
		std::cout << a->getType() << " " << std::endl;
		a->makeSound();
		Animal *b;
		b = a;
		delete b;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		Dog d;
  	  	Animal *b1 = &d;
   		Animal *b2 = &d;
		std::cout << std::endl;
		std::cout << b1->getType() << " " << std::endl;
		b1->makeSound();
		std::cout << std::endl;
		std::cout << b2->getType() << " " << std::endl;
		b2->makeSound();
		std::cout << std::endl;

	}
	{
		std::cout << "****************---WRONGANIMAL---*********************" << std::endl;
		std::cout << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;

		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete j;
		delete i;
		delete meta;
		std::cout << std::endl;
	}
	return 0;
}