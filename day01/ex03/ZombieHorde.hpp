#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *zombie_arr;
	int nb_z;
public:
	ZombieHorde(int const);
	~ZombieHorde();
	void announce(void) const;
};

#endif
