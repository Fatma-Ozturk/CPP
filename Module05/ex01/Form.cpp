#include "Form.hpp"

Form::Form() : name("Default"), isSigned(0), grade_exec(50), grade_sign(100)
{
	std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(const std::string name, const int grade_exec, const int grade_sign) : name(name), grade_exec(grade_exec), grade_sign(grade_sign)
{
	isSigned = 0;
	if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	else if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form Parameter Constructor Called" << std::endl;
}

Form::Form(const Form& Form_Copy) : name(Form_Copy.name), isSigned(Form_Copy.isSigned), grade_exec(Form_Copy.grade_exec), grade_sign(Form_Copy.grade_sign)
{
	*this = Form_Copy;
	std::cout << "Form Copy Constructor Called" << std::endl;
}

Form& Form::operator=(const Form& F_Copy)
{
	*const_cast<std::string*>(&name) = F_Copy.name;
	*const_cast<int*>(&grade_exec) = F_Copy.grade_exec;
	*const_cast<int*>(&grade_sign) = F_Copy.grade_sign;
	isSigned = F_Copy.isSigned;
	std::cout << "Form Assignment Operator Called" << std::endl;
	return *this;
}


std::ostream& operator<<(std::ostream &o, const Form& F)
{
	o << F.getName() << std::endl
	<< "Sign grade : " << F.get_GradeSign() << std::endl
	<< "Execute grade : " << F.get_GradeExec() << std::endl
	<<  "Signed : " << std::boolalpha << F.get_isSigned();
	return o;
}

Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}

std::string Form::getName() const
{
	return name;
}

int Form::get_GradeSign() const
{
	return grade_sign;
}

int Form::get_GradeExec() const
{
	return grade_exec;
}

bool Form::get_isSigned() const
{
	return isSigned;
}

void Form::beSigned(Bureaucrat& B)
{
	if (B.getGrade() > grade_sign)
		throw Form::NotEnoughToSign();
	isSigned = 1;	
}


Form::GradeTooHighException::GradeTooHighException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Form grade can not be higher than 1" << std::endl;
	std::cout << "***********************" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Form grade can not be lower than 150" << std::endl;
	std::cout << "***********************" << std::endl;
}

Form::NotEnoughToSign::NotEnoughToSign()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Bureaucrat is not authorized to sign the form" << std::endl;
	std::cout << "***********************" << std::endl;
}