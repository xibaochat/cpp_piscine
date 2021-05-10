#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string z_type)
{
	this->_type = z_type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* instance = new Zombie(name, this->_type);

	return (instance);
}
