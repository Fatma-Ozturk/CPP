#include "Intern.hpp"

int main(void)
{
	std::cout << std::endl;
	Intern RandomIntern;
	AForm* Form;
	Bureaucrat fatma("Fatma", 1);

	std::cout << std::endl;

	std::cout << "===========ShrubberyCreationForm Creation Test===========" << std::endl;
	Form = RandomIntern.makeForm("shrubbery creation", "shrubbery");
	Form->beSigned(fatma);
	fatma.signForm(*Form);
	delete Form;
	std::cout << std::endl;

	std::cout << "============RobotomyRequestForm Creation Test============" << std::endl;
	Form = RandomIntern.makeForm("robotomy request", "robotomy");
	Form->beSigned(fatma);
	fatma.signForm(*Form);
	delete Form;
	std::cout << std::endl;

	std::cout << "===========PresidentialPardonForm Creation Test===========" << std::endl;
	Form = RandomIntern.makeForm("presidential pardon", "presidential");
	Form->beSigned(fatma);
	fatma.signForm(*Form);
	delete Form;
	std::cout << std::endl;

	std::cout << "===============UndefinedForm Creation Test===============" << std::endl;
	Form = RandomIntern.makeForm("undefined", "undefined");
	delete Form;
	std::cout << std::endl;
	return 0;
}