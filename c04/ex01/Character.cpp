#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"

Character::Character(){return ;}

Character::~Character(){}

Character::Character(std::string const & name):_name(name)
{
	this->_ap = 40;
	this->weapon_ptr = NULL;
	return ;
}

std::string Character::getName() const{return this->_name;}
int Character::getAp() const{return this->_ap;}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	return ;
}

void Character::attack(Enemy *enemy)
{
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->weapon_ptr->getName() << std::endl;
	if (this->weapon_ptr)
	{
		this->weapon_ptr->attack();
		enemy->takeDamage(this->weapon_ptr->getDamage());
		this->_ap -= this->weapon_ptr->getAPCost();
		if (enemy->getHP() <= 0)
			delete (enemy);
	}
	return ;
}

void Character::equip(AWeapon* ptr)
{
	this->weapon_ptr = ptr;
	return ;
}

AWeapon *Character::get_weapon_ptr() const
{
	return (this->weapon_ptr);
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.get_weapon_ptr())
		o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << rhs.get_weapon_ptr()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
	return (o);
}
