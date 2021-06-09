#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// AssaultTerminator   *Gracia = new AssaultTerminator;
	// ISpaceMarine        *Poppuri = new AssaultTerminator(*Gracia);

    // TacticalMarine      *Ally = new TacticalMarine;
    // ISpaceMarine        *Bella = new TacticalMarine(*Ally);

    // ISquad              *Team = new Squad;

    // Team->push(Poppuri);
    // Team->push(Bella);

    // std::cout << std::endl;

    // std::cout << "Delete primary Assault & Tactical:" << std::endl << std::endl;
    // delete Gracia;
    // delete Ally;

    // std::cout << std::endl << "Delete Team:" << std::endl << std::endl;
    // delete Team;

	std::cout << "------TEST------" << std::endl;
	ISpaceMarine *ass_obj = new AssaultTerminator;
	AssaultTerminator *ass_obj1 = new AssaultTerminator;
	ISpaceMarine *ass_obj2 = new AssaultTerminator(*ass_obj1);//cannot send argument of class
	ISpaceMarine *ass_obj3 = ass_obj->clone();//clone from Base_class && subclass, all fonctionne

	ISpaceMarine *tac_obj = new TacticalMarine;
	TacticalMarine *tac_obj1 = new TacticalMarine;
	ISpaceMarine *tac_obj2 = new TacticalMarine(*tac_obj1);
	ISpaceMarine *tac_obj3 = tac_obj->clone();

	ISquad *Team =  new Squad;
	Team->push(ass_obj);
	Team->push(ass_obj1);
	Team->push(ass_obj2);
	Team->push(ass_obj3);
	Team->push(tac_obj);
	Team->push(tac_obj1);
	Team->push(tac_obj2);
	Team->push(tac_obj3);
	std::cout << "Team has " << Team->getCount() << " units" << std::endl;
	Team->push(tac_obj3);
	std::cout << "Team has " << Team->getCount() << " units" << std::endl;

	delete Team;

	return 0;
}
