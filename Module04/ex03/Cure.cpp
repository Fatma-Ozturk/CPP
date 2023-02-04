#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default Constructor Called" << std::endl;
}

Cure::Cure(const Cure& Cure_Copy) : AMateria(Cure_Copy.getType())
{
	std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure& Cure::operator=(const Cure& Cure_Copy)
{
	type = Cure_Copy.getType();
	std::cout << "Cure Assignment Operator Called" << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}