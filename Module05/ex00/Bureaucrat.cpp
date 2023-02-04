#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Fatma"), grade(1)
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat Parameter Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& Bureaucrat_Copy) : name(Bureaucrat_Copy.name), grade(Bureaucrat_Copy.grade)
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& Bureaucrat_Copy)
{
	*const_cast<std::string*>(&name) = Bureaucrat_Copy.name;//const değişkenin değerini değiştirmeye çalıştığımız için
	grade = Bureaucrat_Copy.grade;
	std::cout << "Bureaucrat Assignment Operator Called" << std::endl;
	return *this;
}


std::ostream& operator<<(std::ostream &o, const Bureaucrat& B)
{
	o << B.getName() << ", bureaucrat grade : " << B.getGrade() << "." << std::endl; 
	return o;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void  Bureaucrat::incrementGrade()
{
	if(grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if(grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;

}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Bureaucrat grade can not be higher than 1" << std::endl;
	std::cout << "***********************" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "*********Error*********" << std::endl;
	std::cout << "Bureaucrat grade can not be lower than 150" << std::endl;
	std::cout << "***********************" << std::endl;
}

