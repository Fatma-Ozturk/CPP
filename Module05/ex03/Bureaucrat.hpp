#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	std::string const name;
	int grade;
	
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& Bureaucrat_Copy);
	Bureaucrat& operator=(const Bureaucrat& Bureaucrat_Copy);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(const AForm& F) const;
	void executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
	};
};

std::ostream& operator<<(std::ostream &o, const Bureaucrat& B);

#endif