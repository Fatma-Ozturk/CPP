#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	{
		std::cout << "****************---ANIMAL---*********************" << std::endl;
		std::cout << std::endl;
		//const AAnimal* meta = new AAnimal();
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		//std::cout << meta->getType() << " " << std::endl;

		std::cout << std::endl;
		i->makeSound();
		j->makeSound();
		//meta->makeSound();

		std::cout << std::endl;
		delete j;
		delete i;
		//delete meta;
		std::cout << std::endl;
	}
	{
		std::cout << "****************---ADDITIONALTESTS---*********************" << std::endl;
		AAnimal* a = new Cat();
		std::cout << a->getType() << " " << std::endl;
		a->makeSound();
		AAnimal *b;
		b = a;
		delete b;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		Dog d;
  	  	AAnimal *b1 = &d;
   		AAnimal *b2 = &d;
		std::cout << std::endl;
		std::cout << b1->getType() << " " << std::endl;
		b1->makeSound();
		std::cout << std::endl;
		std::cout << b2->getType() << " " << std::endl;
		b2->makeSound();
		std::cout << std::endl;
	}
	return(0);
}