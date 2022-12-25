#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant(void):Enemy(170, "Super Mutant")
{
	std::cout << YELLOW << "Gaaah. Me want smash heads!" << NC << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const &rhs):Enemy(rhs){return ;}

SuperMutant & SuperMutant::operator=( SuperMutant const & rhs)
{
	if (this != &rhs)
        Enemy::operator=(rhs);
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
	return ;
}
