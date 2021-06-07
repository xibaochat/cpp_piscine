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
	std::cout << *me;
	me->equip(pr);
	me->attack(s_mutant);//ap = 11, s_mutant hp:11
	std::cout << *me;
	me->attack(s_mutant);//ap = 6, s_mutant hp = 0
	std::cout << *me;

	me->attack(rad);//use pr:ap =1, rad hp:59
	me->attack(rad);//ap < 0, cannot have attack
	//add AP
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;

	me->equip(NULL);
	me->attack(rad);//err
	me->equip(pf);
	me->attack(rad);//use pf,ap = 32, rad hp:9
	me->equip(pr);
	me->attack(rad);//ap = 27, rad dead

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->equip(kitten);
	me->attack(monster_zhube);
	me->attack(monster_zhube);
	me->attack(monster_zhube);
	delete me;
	delete pr;
	delete pf;
	delete kitten;
	return (0);
}
