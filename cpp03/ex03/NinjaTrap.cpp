#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "Ninja-TP Defaut constructor is called" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name)
	: ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "NinjaTrap Constructor :" << BLUE << name<< NC << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src): ClapTrap(src){return ;}

NinjaTrap::~NinjaTrap(void)
{
	std::cout <<  "NinjaTrap Destruction " << BLUE << this->_name << NC << " in fragtrap object is mort" << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_max_hit_points = rhs._max_hit_points;
	this->_energy_points = rhs._energy_points;
	this->_max_energy_points = rhs._max_energy_points;
	this->_level = rhs._level;
	this->_melee_attack_damage = rhs._melee_attack_damage;
	this->_ranged_attack_damage = rhs._ranged_attack_damage;
	this->_armor_damage_reduction = rhs._armor_damage_reduction;
	return (*this);
}

void NinjaTrap::ninjaShoebox(FragTrap &obj)
{
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << NINJA_ATTACK << std::endl;
		std::cout << NINJA_EP << std::endl;
		obj.takeDamage(10);
	}
	else
		std::cout << NINJA_NO_EP << std::endl;
	return ;
}

void NinjaTrap::ninjaShoebox(ClapTrap &obj)
{
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << NINJA_ATTACK << std::endl;
		std::cout << NINJA_EP << std::endl;
		obj.takeDamage(10);
	}
	else
		std::cout << NINJA_NO_EP << std::endl;
	return ;
}

void NinjaTrap::ninjaShoebox(ScavTrap &obj)
{
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << NINJA_ATTACK << std::endl;
		std::cout << NINJA_EP << std::endl;
		obj.takeDamage(10);
	}
	else
		std::cout << NINJA_NO_EP << std::endl;
	return ;
}

void NinjaTrap::ninjaShoebox(NinjaTrap  &obj)
{
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << NINJA_ATTACK << std::endl;
		std::cout << NINJA_EP << std::endl;
		obj.takeDamage(10);
	}
	else
		std::cout << NINJA_NO_EP << std::endl;
	return ;
}
