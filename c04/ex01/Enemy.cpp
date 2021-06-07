#include "Enemy.hpp"

Enemy::Enemy(void){return ;}

Enemy::Enemy(int hp, std::string const & type):_hp(hp), _type(type)
{return ;}

Enemy::~Enemy(void){return ;}

Enemy::Enemy(Enemy const & rhs){
	*this = rhs;
	return ;
}

Enemy & Enemy::operator=( Enemy const & rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return (*this);
}

int Enemy::getHP() const{
	return (this->_hp);
}

std::string  Enemy::getType() const{
	return (this->_type);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (this->_hp - damage < 0)
		this->_hp = 0;
	else
		this->_hp -= damage;
	return ;
}
