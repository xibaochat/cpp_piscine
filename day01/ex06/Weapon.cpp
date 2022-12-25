#include "Weapon.hpp"

void Weapon::setType(std::string const s)
{
	this->w_str = s;
}

std::string const &  Weapon:: getType(void)
{
	return (this->w_str);
}

Weapon::Weapon(std::string weapon)
{
	this->w_str = weapon;
	return ;
}
