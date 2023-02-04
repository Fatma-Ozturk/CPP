#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& R_Copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& R);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif