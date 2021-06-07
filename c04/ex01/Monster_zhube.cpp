#include "Enemy.hpp"
#include "Monster_zhube.hpp"

Monster_zhube::Monster_zhube(void):Enemy(40, "Monster_zhube")
{
	std::cout << ORANGE << "* Hahaha *" << NC << std::endl;
	return ;
}

Monster_zhube::~Monster_zhube(void)
{
	std::cout << "* see you soon:( *" << std::endl;
	return ;
}

Monster_zhube::Monster_zhube( Monster_zhube const &rhs):Enemy(rhs){return ;}

Monster_zhube & Monster_zhube::operator=( Monster_zhube const & rhs)
{
	if (this != &rhs)
        Enemy::operator=(rhs);
	return (*this);
}
