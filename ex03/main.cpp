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
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		Character* bob = new Character("bob");
		AMateria* tmp;
		AMateria* tmp2;

		tmp = src->createMateria("ice");
		tmp2 = src->createMateria("cure");
		me->equip(tmp);
		me->unequip(0);
		bob->equip(tmp);

		Character* cpy = new Character(*bob);
		cpy->use(0, *me);
		bob->use(0, *me);

		Character tst = Character("tst");
		Character tst2 = Character("tst2");

		tst.equip(tmp2);
		tst2 = tst;
		tst2.use(0, *me);

		delete src;
		delete me;
		delete bob;
		delete cpy;

	}
}