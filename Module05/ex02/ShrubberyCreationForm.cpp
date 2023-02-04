#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 137, 145), target(target)
{
	std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;

}
	
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& S_Copy) : AForm(S_Copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& S)
{
	std::cout << "ShrubberyCreationForm Assignment Operator Called" << std::endl;
	AForm::operator=(S);
	return *this;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream out;
	std::string ascii_trees =       "\n" 
									"         O                     O\n"
									"        $$$                   $$$\n"
									"       $$$$$                 $$$$$\n"
									"      $$$$$$$               $$$$$$$\n"
									"     $$$$$$$$$             $$$$$$$$$\n"
									"    $$$$$$$$$$$           $$$$$$$$$$$\n"
									"   $$$$$$$$$$$$$         $$$$$$$$$$$$$\n"
									"  $$$$$$$$$$$$$$$       $$$$$$$$$$$$$$$\n"
									" $$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$\n"
									"$$$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$\n"
									"        |||                   |||\n"
									"        |||                   |||\n"
									"        |||                   |||\n"
									"        |||                   |||";

	if (!get_isSigned())
		throw NotSignedException();
	else if (executor.getGrade() > get_GradeExec())
		throw NotEnoughToExecute();
	else
	{
		out.open(getName() + "_shrubbery", std::ofstream::out | std::ofstream::trunc); // | bitwise veya
		if (!out)
			throw FileCreationException();
		out << ascii_trees;
		out.close();
		std::cout << getName() << "_shrubbery file created." << std::endl;
	}

}