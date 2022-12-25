#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & rhs)
{
	*this = rhs;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}
//no member variables, there's nothing to do in the copy constructor or copy assignment operator to initialize
TacticalMarine & TacticalMarine::operator= (TacticalMarine const & rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}
