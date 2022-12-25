#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):_name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(void){return ;}

AWeapon::~AWeapon(void){return ;}

AWeapon::AWeapon(AWeapon const &src){
	*this = src;
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}

std::string AWeapon::getName() const{
	return (this->_name);
}

int AWeapon::getAPCost() const{
	return (this->_apcost);
}

int AWeapon::getDamage() const{
	return (this->_damage);
}
