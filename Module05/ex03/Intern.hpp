#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& I);
	Intern& operator=(const Intern& I);
	~Intern();

	AForm* makeForm(std::string name, std::string target);
};


#endif