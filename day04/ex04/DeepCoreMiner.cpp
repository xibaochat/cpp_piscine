#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(){return ;}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &rhs)
{
	*this = rhs;
}
DeepCoreMiner::~DeepCoreMiner(){return ;}


DeepCoreMiner &DeepCoreMiner::operator=( DeepCoreMiner const &rhs)
{
	(void)rhs;
	return (*this);
}

void DeepCoreMiner::mine(IAsteroid* target)
{
	std::cout << "* mining deep... got " << target->beMined(this) << "! *" << std::endl;
	return ;
}
