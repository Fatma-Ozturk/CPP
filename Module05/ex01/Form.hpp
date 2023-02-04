#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string name;
	bool isSigned;
	const int grade_exec;
	const int grade_sign;

public:
	Form();
	Form(const std::string name, const int grade_exec, const int grade_sign);
	Form(const Form& Form_Copy);
	Form& operator=(const Form& F_Copy);
	~Form();

	void beSigned(Bureaucrat& B);

	std::string getName() const;
	bool get_isSigned() const;
	int get_GradeSign() const;
	int get_GradeExec() const;

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

	class NotEnoughToSign : public std::exception
	{
	public:
		NotEnoughToSign();
	};

};

std::ostream& operator<<(std::ostream &o, const Form& F);

#endif