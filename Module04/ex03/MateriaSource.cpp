#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
		Materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& M_Copy)
{
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		Materias[i] = NULL;
		if (M_Copy.Materias[i])
			Materias[i] = M_Copy.Materias[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& M_Copy)
{
	std::cout << "MateriaSource Assignation Operator Called" << std::endl;
	if (this != &M_Copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (Materias[i])
			{
				delete Materias[i];
				Materias[i] = NULL;
			}
			if (M_Copy.Materias[i])
				Materias[i] = M_Copy.Materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (Materias[i])
		{
			delete Materias[i];
			Materias[i] = NULL;
		}
	}
}


void MateriaSource::learnMateria(AMateria* M)
{
	if (!M)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!Materias[i])
		{
			Materias[i] = M;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (Materias[i] && Materias[i]->getType() == type)
			return Materias[i]->clone();
	}
	return 0;
}