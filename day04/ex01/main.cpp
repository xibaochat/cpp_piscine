#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Kitten_bite.hpp"
#include "Monster_zhube.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* rad = new RadScorpion();//hp = 80
	Enemy* s_mutant = new SuperMutant();//hp = 170, takedamege-3
	Enemy* monster_zhube = new Monster_zhube(); // hp = 40
	AWeapon* pr = new PlasmaRifle(); //apcost = 5, damage = 21
	AWeapon* pf = new PowerFist();//apcost = 8, damage = 50
	AWeapon* kitten = new Kitten_bite();//apc = 3, damage = 15

	me->equip(pf);
	std::cout << *me;

	me->attack(s_mutant);// ap=32, s_mutant hp:123
	me->attack(s_mutant);//ap = 24, s_mutant hp:76
	me->attack(s_mutant);//ap = 16, s_mutant hp:29
	me->attack(monster_zhube);//ap = 8, zhu hp:0 dead
	std::cout << *me;

	me->equip(kitten);
	me->attack(s_mutant);//ap = 5, s_mutant hp:17
	std::cout << *me;
	me->attack(s_mutant);//ap = 2, s_mutant hp = 5
	std::cout << *me;

	me->attack(rad);//ap < 0, cannot have attack
	me->attack(rad);//ap < 0, cannot have attack
	//add AP
	me->recoverAP();//ap =12

	me->attack(s_mutant);//ap = 9, s_mutant hp:0 dead


	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();//ap:59 ->40
	std::cout << *me;

	me->equip(NULL);
	me->attack(rad);//err

	me->equip(pf);
	me->attack(rad);//use pf,ap = 32, rad hp:30
	me->attack(rad);//ap = 24, rad dead

	delete me;
	delete pr;
	delete pf;
	delete kitten;
	return (0);
}
