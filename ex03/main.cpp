#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include <iostream>


int main()
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
	// me->unequip(0);

	std::cout << "-- TEST --" << std::endl;
	ICharacter* cpy;
	cpy = me;
	cpy->use(0, *bob);
	delete me;
	cpy->unequip(0);
	// cpy->use(1, *bob);
	

	// delete me;

	delete bob;
	delete src;
	return 0;
}