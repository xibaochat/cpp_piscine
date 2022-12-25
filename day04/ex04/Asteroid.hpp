#ifndef ASTEROID_H
# define ASTEROID_H

#include "IAsteroid.hpp"

class Asteroid: public IAsteroid
{
private:
	std::string _name;
public:
	Asteroid();
	~Asteroid();
	Asteroid(Asteroid const &);
	Asteroid & operator=(Asteroid const &);
	std::string beMined(DeepCoreMiner*) const;
	std::string beMined(StripMiner*) const;
	std::string getName() const;
};

#endif
