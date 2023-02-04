#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
private:
	std::string name;
	bool isSigned;
	const int grade_exec;
	const int grade_sign;

public:
	AForm();
	AForm(const std::string name, const int grade_exec, const int grade_sign);
	AForm(const AForm& Form_Copy);
	AForm& operator=(const AForm& F_Copy);
	virtual ~AForm();

	void beSigned(Bureaucrat& B);
	virtual void execute(Bureaucrat const & executor) const = 0;

	std::string getName() const;
	bool get_isSigned() const;
	int get_GradeSign() const;
	int get_GradeExec() const;

	class NotEnoughToSign : public std::exception
	{
	public:
		NotEnoughToSign();
	};

	class NotEnoughToExecute : public std::exception
	{
	public:
		NotEnoughToExecute();
	};

	class NotSignedException : public std::exception
	{
	public :
		NotSignedException();
	};

	class FileCreationException : public std::exception
	{
	public :
		FileCreationException();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
	};

};

std::ostream& operator<<(std::ostream &o, const AForm& F);



#endif