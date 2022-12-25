#include "Human.hpp"

const Brain &  Human::getBrain(void) const
{
	return (this->brain);
}

const std::string Human::identify(void) const
{
	return (this->brain.identify());
}
