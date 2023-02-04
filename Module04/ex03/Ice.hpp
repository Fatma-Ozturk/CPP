#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& Ice_Copy);
	Ice& operator=(const Ice& Ice_Copy);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif