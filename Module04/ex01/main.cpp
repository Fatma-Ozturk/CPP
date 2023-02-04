#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	{
		std::cout << std::endl;
		std::cout << "******test1*******" << std::endl;
		std::cout << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;

		delete j;
		delete i;
	}

	{
		std::cout << std::endl;
		std::cout << "******test2*******" << std::endl;
		std::cout << std::endl;

		Dog *D = new Dog();
		Cat *C = new Cat();
		std::cout << std::endl;
	
		std::cout << D->getType() << " " << D->get_DogBrain()->get_Ideas(10) << std::endl;
		std::cout << C->getType() << " " << C->get_CatBrain()->get_Ideas(10) << std::endl;
		std::cout << std::endl;

		delete D;
		delete C;
	}

	{
		std::cout << std::endl;
		std::cout << "******test3*******" << std::endl;
		std::cout << std::endl;

		const Animal* animal[10];
		for (int i = 0; i < 10; i++)
		{
			std::cout << std::endl;
			std::cout << "i : " << i << std::endl;
			if (i % 2)
				animal[i] = new Cat();
			else
				animal[i] = new Dog();
		}

		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << "i : " << i << std::endl;
			delete animal[i];
			std::cout << std::endl;
		}
	}

	{
		std::cout << std::endl;
		std::cout << "******test4*******" << std::endl;
		std::cout << std::endl;

		const Animal* c1 = new Cat();
		const Animal* c2 = new Cat(*dynamic_cast<Cat const *>(c1));
		std::cout << std::endl;
		delete c1;
		delete c2;
	}

	{
		std::cout << std::endl;
		std::cout << "******test5*******" << std::endl;
		std::cout << std::endl;

		Dog d1;
		Dog d2 = d1;
		d1.get_DogBrain()->set_Ideas("haha", 0);

		std::cout << std::endl;
		for (int index = 0; index < 100; index++)
			std::cout << d1.get_DogBrain()->get_Ideas(index) << " ";

		std::cout << std::endl << std::endl;
		for (int index = 0; index < 100; index++)
			std::cout << d2.get_DogBrain()->get_Ideas(index) << " ";
		std::cout << std::endl << std::endl;
	}
	return 0;
}