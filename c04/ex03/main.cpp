#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria* tmp1;
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << "-----bob fight back----" << std::endl;
	AMateria* tmp2;
	tmp2 = src->createMateria("cure");
	bob->equip(tmp2);
	AMateria* tmp3;
	tmp3 = src->createMateria("ice");
	bob->equip(tmp3);

	me->use(0, *bob);
	bob->use(1, *me);
	me->use(1, *bob);
	bob->use(0, *me);
	bob->use(0, *me);
	bob->use(0, *me);

	std::cout << "me slot 0 Type: " << tmp->getType() << " XP: " << tmp->getXP() << std::endl;
	std::cout << "me slot 1 Type: " << tmp1->getType() << " XP: " << tmp1->getXP() << std::endl;
	std::cout << "bob slot 0 Type: " << tmp2->getType() << " XP: " << tmp2->getXP() << std::endl;
	std::cout << "bob slot 1 Type: " << tmp3->getType() << " XP: " << tmp3->getXP() << std::endl;
	bob->unequip(0);
	bob->unequip(0);
	bob->equip(tmp2);
//	bob->equip(tmp3);
	bob->use(0, *me);
	bob->use(1, *me);

	if (tmp3)
		delete tmp3;

	delete bob;
	delete me;
	delete src;
	return 0;
}
