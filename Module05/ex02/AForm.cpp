#include "AForm.hpp"

AForm::AForm() : name("Default"), isSigned(0), grade_exec(50), grade_sign(100)
{
	std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(const std::string name, const int grade_exec, const int grade_sign) : name(name), isSigned(0), grade_exec(grade_exec), grade_sign(grade_sign)
{
	isSigned = 0;
	std::cout << "AForm Parameter Constructor Called" << std::endl;
	if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
	else if (grade_sign < 1 || grade_exec < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm& Form_Copy) : name(Form_Copy.name), isSigned(Form_Copy.isSigned), grade_exec(Form_Copy.grade_exec), grade_sign(Form_Copy.grade_sign)
{
	*this = Form_Copy;
	std::cout << "AForm Copy Constructor Called" << std::endl;
}

AForm& AForm::operator=(const AForm& F_Copy)
{
	*const_cast<std::string*>(&name) = F_Copy.name;
	*const_cast<int*>(&grade_exec) = F_Copy.grade_exec;
	*const_cast<int*>(&grade_sign) = F_Copy.grade_sign;
	isSigned = F_Copy.isSigned;
	std::cout << "AForm Assignment Operator Called" << std::endl;
	return *this;
}


std::ostream& operator<<(std::ostream &o, const AForm& F)
{
	o << F.getName() << std::endl
	<< "Sign grade : " << F.get_GradeSign() << std::endl
	<< "Execute grade : " << F.get_GradeExec() << std::endl
	<<  "Signed : " << std::boolalpha << F.get_isSigned();
	return o;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor Called" << std::endl;
}

std::string AForm::getName() const
{
	return name;
}

int AForm::get_GradeSign() const
{
	return grade_sign;
}

int AForm::get_GradeExec() const
{
	return grade_exec;
}

bool AForm::get_isSigned() const
{
	return isSigned;
}

void AForm::beSigned(Bureaucrat& B)
{
	if (B.getGrade() > grade_sign)
		throw AForm::NotEnoughToSign();
	isSigned = 1;	
}


AForm::NotSignedException::NotSignedException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Form is not signed!" << std::endl;
	std::cout << "***********************" << std::endl;
}

AForm::FileCreationException::FileCreationException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "File creation error!" << std::endl;
	std::cout << "***********************" << std::endl;
}

AForm::NotEnoughToSign::NotEnoughToSign()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Bureaucrat is not authorized to sign the form" << std::endl;
	std::cout << "***********************" << std::endl;
}

AForm::GradeTooHighException::GradeTooHighException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Form grade can not be higher than 1" << std::endl;
	std::cout << "***********************" << std::endl;
}

AForm::GradeTooLowException::GradeTooLowException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Form grade can not be lower than 150" << std::endl;
	std::cout << "***********************" << std::endl;
}

AForm::NotEnoughToExecute::NotEnoughToExecute()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Bureaucrat is not authorized to execute the form" << std::endl;
	std::cout << "***********************" << std::endl;
}