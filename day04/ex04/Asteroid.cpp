#include "Asteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

Asteroid::Asteroid():_name("Asteroid"){}

Asteroid::~Asteroid(){}

Asteroid::Asteroid(Asteroid const &rhs)
{
	*this = rhs;
}

Asteroid &Asteroid::operator=( Asteroid const &rhs)
{
	(void)rhs;
	return (*this);
}

std::string Asteroid::beMined(DeepCoreMiner*deep) const
{
	(void)deep;
	return ("Dragonite");
}

std::string Asteroid::beMined(StripMiner*strip) const
{
	(void)strip;
	return ("Flavium");
}

std::string  Asteroid::getName() const
{
	return (this->_name);
}
