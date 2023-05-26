#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include <iostream>


int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		AMateria* tmp2;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp2 = src->createMateria("cure");
		me->equip(tmp2);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
		delete tmp;
		delete tmp2;
	}
	{
		std::cout << "---------- My test ----------" << std::endl;
		ICharacter* me = new Character("me");
		ICharacter* bob = new Character("bob");
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);

		std::cout << std::endl;

		me->unequip(2);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		
		std::cout << std::endl;

		me->unequip(1);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);

		std::cout << std::endl;

		me->unequip(0);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);

		delete bob;
		delete me;
		delete src;
		delete tmp;

		return 0;
	}
}