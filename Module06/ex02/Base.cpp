#include "Base.hpp"

Base::~Base(){std::cout << "Base Destructor" << std::endl;}
A::~A(){std::cout << "A Destructor" << std::endl;}
B::~B(){std::cout << "B Destructor" << std::endl;}
C::~C(){std::cout << "C Destructor" << std::endl;}

Base * generate(void)
{
	int i;
	std::cout << "enter 1 for A cast\nenter 2 for B cast\nenter 3 for C cast\n" << std::endl;
	std::cout << "enter your choice: ";
	std::cin >> i;
	switch (i)
	{
		case 1: return new A;
		case 2: return new B;
		case 3: return new C;
	}
	return NULL;
}


void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type A(pointer)" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B(pointer)" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C(pointer)" << std::endl;
	else
		std::cout << "pointer dynamic_cast error" << std::endl;

}


void identify(Base& p)
{
	try
	{
		A TypeA;
		TypeA = dynamic_cast<A&>(p);
		std::cout << "Type A(reference)" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "A : " << e.what() << std::endl;
	}

	try
	{
		B TypeB;
		TypeB = dynamic_cast<B&>(p);
		std::cout << "Type B(reference)" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "B : " << e.what() << std::endl;
	}

	try
	{
		C TypeC;
		TypeC = dynamic_cast<C&>(p);
		std::cout << "Type C(reference)" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "C : " << e.what() << std::endl;
	}
}