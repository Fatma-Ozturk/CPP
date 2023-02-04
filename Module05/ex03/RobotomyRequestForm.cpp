#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
	std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 45, 72), target(target)
{
	std::cout << "RobotomyRequestForm Parameter Constructor Called" << std::endl;

}
	
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& R_Copy) : AForm(R_Copy)
{
	std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& R)
{
	std::cout << "RobotomyRequestForm Assignment Operator Called" << std::endl;
	AForm::operator=(R);
	return *this;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!get_isSigned())
		throw NotSignedException();
	else if (executor.getGrade() > get_GradeExec())
		throw NotEnoughToExecute();
	else
	{
		srand(time(NULL));
		std::cout << "\n**************(some drilling noises)********(Drrrrrrrrrrr!)**********\n" << std::endl;
		if (rand() % 2)
			std::cout << getName() << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << getName() << " has been failed robotomize." << std::endl;
	}

}