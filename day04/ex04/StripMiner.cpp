#include "StripMiner.hpp"

StripMiner::StripMiner(){return ;}

StripMiner::StripMiner(StripMiner const &rhs)
{
	*this = rhs;
}
StripMiner::~StripMiner(){return ;}

StripMiner &StripMiner::operator=( StripMiner const &rhs)
{
	(void)rhs;
	return (*this);
}

void StripMiner::mine(IAsteroid* target)
{
	std::cout << "* strip deep... got " << target->beMined(this) << "! *" << std::endl;
	return ;
}
