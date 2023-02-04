#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


int main()
{
	{
		std::cout << std::endl;
		std::cout << "****************---TEST---*********************" << std::endl;
		IMateriaSource* src = new MateriaSource();

		std::cout << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		std::cout << std::endl;
		ICharacter* Fatma = new Character("fatma");

		std::cout << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("ice");
		Fatma->equip(tmp);
		tmp = src->createMateria("cure");
		Fatma->equip(tmp);

		std::cout << std::endl;
		ICharacter* Ozturk = new Character("ozturk");

		std::cout << std::endl;
		Fatma->use(0, *Ozturk);
		Fatma->use(1, *Ozturk);

		std::cout << std::endl;
		delete Ozturk;
		delete Fatma;
		delete src;
		std::cout << std::endl;
	}

	{

		std::cout << "****************---ADDITIONALTESTS---*********************" << std::endl;

		IMateriaSource* mSource = new MateriaSource();
		std::cout << std::endl;
		mSource->learnMateria(new Ice());
		mSource->learnMateria(new Cure());
		mSource->learnMateria(NULL); // this must not segfault
		mSource->learnMateria(new Ice());
		mSource->learnMateria(new Cure()); // this one cant be learned;
		
		std::cout << std::endl;
		ICharacter* fatma = new Character("Fatma");
		std::cout << std::endl;

		fatma->equip(mSource->createMateria("ice"));
		fatma->equip(mSource->createMateria("ice"));
		fatma->equip(mSource->createMateria("cure"));
		fatma->equip(mSource->createMateria("ice"));
		fatma->equip(mSource->createMateria("cure")); // can't be equip
		fatma->equip(mSource->createMateria("ice")); // can't be equip
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
			fatma->use(i, *fatma);
		
		std::cout << std::endl;
		delete fatma;
		delete mSource;
	}
	return 0;
}