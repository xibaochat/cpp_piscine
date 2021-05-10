#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump()
{
	int rand_index;

	srand(time(NULL));
	rand_index = rand() % 10;
	Zombie instance(name_arr[rand_index], "animal");
	instance.announce();
}

int main()
{
	Zombie		petit_zombie("Teletubbies", "television series");
	Zombie		middle_zombie("Noddy", "fictional character");
	ZombieEvent	big_event;
	Zombie*		zombie_event_ptr;
	int i;

	i = -1;
	petit_zombie.announce();
	middle_zombie.announce();
	big_event.setZombieType("chanteuse");
	zombie_event_ptr = big_event.newZombie("Hélène");
	zombie_event_ptr->announce();
	delete (zombie_event_ptr);

	big_event.setZombieType("bande");
	zombie_event_ptr = big_event.newZombie("F4");
	zombie_event_ptr->announce();
	delete (zombie_event_ptr);

	randomChump();
	randomChump();
	randomChump();
	return (0);
}
