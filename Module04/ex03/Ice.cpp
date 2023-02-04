#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default Constructor Called" << std::endl;
}

Ice::Ice(const Ice& Ice_Copy) : AMateria(Ice_Copy.getType())
{
	std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice& Ice::operator=(const Ice& Ice_Copy)
{
	type = Ice_Copy.getType();
	std::cout << "Ice Assignment Operator Called" << std::endl;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}