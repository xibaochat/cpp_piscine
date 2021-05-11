#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump()
{
	int rand_index;

	srand(time(NULL));
	rand_index = rand() % 10;
	Zombie instance;
	instance.set_name(name_arr[rand_index]);
	instance.set_type("animal");
	instance.announce();
}

int main()
{
	Zombie		petit_zombie;
	Zombie		middle_zombie;
	ZombieEvent	big_event;
	Zombie*		zombie_event_ptr;

	petit_zombie.set_name("Teletubbies");
	petit_zombie.set_type("television series");
	petit_zombie.announce();

	middle_zombie.set_name("Noddy");
	middle_zombie.set_type("fictional character");
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
