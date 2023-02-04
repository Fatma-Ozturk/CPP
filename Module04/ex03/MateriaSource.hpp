#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private :
	AMateria* Materias[4];
public :
	MateriaSource();
	MateriaSource(const MateriaSource& M_Copy);
	MateriaSource& operator=(const MateriaSource& M_Copy);
	~MateriaSource();

	void learnMateria(AMateria* M);
	AMateria* createMateria(const std::string& type);
};

#endif