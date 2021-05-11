#include "ZombieHorde.hpp"

int randomChump()
{
	int rand_index;

	srand(time(NULL));
	rand_index = rand() % 10;
	return (rand_index);
}

ZombieHorde::ZombieHorde(int nb) : nb_z(nb)
{
	int i;

	i = -1;
	this->zombie_arr = new Zombie[nb];
	while (++i < nb)
	{
		this->zombie_arr[i].set_name(name_arr[randomChump()]);
		this->zombie_arr[i].set_type("Horde");
	}
	return ;
}

void ZombieHorde::announce(void) const
{
	int i;

	i = -1;
	while (++i < this->nb_z)
		this->zombie_arr[i].announce();
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->zombie_arr;

	return ;
}
