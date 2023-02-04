#include <string>
#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	
	std::string &stringREF = brain; //referanslar aynı satırda atanmak zorundadır.
	std::string *stringPTR = &brain;
	std::cout << "The memory address of the string variable: " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
//pointerlara adres değeri atanırken, referanslara value atanır.
//referansların kendine ait adresi olmaz. referans ettiği adresi kullanır.
//referans değişkene ikinci bir ad yoluyla ulaşmak gibidir.