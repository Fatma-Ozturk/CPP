#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& S_Copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& S);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};



#endif