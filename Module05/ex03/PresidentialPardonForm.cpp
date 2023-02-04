#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
	std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 5, 25), target(target)
{
	std::cout << "PresidentialPardonForm Parameter Constructor Called" << std::endl;

}
	
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& P_Copy) : AForm(P_Copy)
{
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& P)
{
	std::cout << "PresidentialPardonForm Assignment Operator Called" << std::endl;
	AForm::operator=(P);
	return *this;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!get_isSigned())
		throw NotSignedException();
	else if (executor.getGrade() > get_GradeExec())
		throw NotEnoughToExecute();
	else
		std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}