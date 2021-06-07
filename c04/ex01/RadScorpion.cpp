#include "Enemy.hpp"
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void):Enemy(80, "RadScorpion")
{
	std::cout << ORANGE << "* click click click *" << NC << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion::RadScorpion( RadScorpion const &rhs):Enemy(rhs){return ;}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs)
{
	if (this != &rhs)
        Enemy::operator=(rhs);
	return (*this);
}

void RadScorpion::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
	return ;
}
