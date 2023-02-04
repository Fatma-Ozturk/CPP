#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& P_Copy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& P);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};

#endif