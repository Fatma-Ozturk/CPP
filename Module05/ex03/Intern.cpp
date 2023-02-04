#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor Called" << std::endl;
}
	
Intern::Intern(const Intern& I)
{
	(void)I;
	std::cout << "Intern Copy Constructor Called" << std::endl;
}

Intern& Intern::operator=(const Intern& I)
{
	(void)I;
	std::cout << "Intern Assignment Operator Called" << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor Called" << std::endl;
}


AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	std::cout << "Intern creates " << name << std::endl;
	while(name != forms[i] && i < 3)
		i++;
	switch (i)
	{
		case 0: return new RobotomyRequestForm(target);
		case 1: return new PresidentialPardonForm(target);
		case 2: return new ShrubberyCreationForm(target);
	}
	std::cout << "There is no form with this name." << std::endl;
	return (NULL);
}