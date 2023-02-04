#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() :type("Default")
{
	std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria Named Constructor Called" << std::endl;

}

AMateria::AMateria(const AMateria& AMateria_Copy) :type(AMateria_Copy.type)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;

}

AMateria& AMateria::operator=(const AMateria& AMateria_Copy)
{
	std::cout << "AMateria Assignment Operator Called" << std::endl;
	type = AMateria_Copy.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;

}
std::string const& AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << " Called Amateria Use Function" << std::endl;
}




