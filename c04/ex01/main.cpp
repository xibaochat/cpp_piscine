#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();//hp = 80, type = "RadScorpion"
	AWeapon* pr = new PlasmaRifle(); //apcost = 5, damage = 21
	AWeapon* pf = new PowerFist();//apcost = 8, damage = 50

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return (0);
}
