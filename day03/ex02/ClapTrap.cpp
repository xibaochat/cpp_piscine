# include "ClapTrap.hpp"

void ClapTrap::show_info(void)
{
	std::cout << "name:" << BLUE << this->_name << NC << std::endl;
	std::cout << "HP     :" << GREEN << this->_hit_points << "/" << this->_max_hit_points << NC << std::endl;
	std::cout << "EP     :" << YELLOW << this->_energy_points << "/" << this->_max_energy_points << NC << std::endl;

}

ClapTrap::ClapTrap(void){
	std::cout << "ClapTrap defaut constructoris called" << std::endl;
	return ;}

ClapTrap::ClapTrap(
	int hp,
	int max_hp,
	int ep,
	int max_ep,
	int level,
	std::string name,
	unsigned int melee_att,
	unsigned int range_att,
	unsigned int armor
	):
	_hit_points(hp),
	_max_hit_points(max_hp),
	_energy_points(ep),
	_max_energy_points(max_ep),
	_level(level),
	_name(name),
	_melee_attack_damage(melee_att),
	_ranged_attack_damage(range_att),
	_armor_damage_reduction(armor)
{
	std::cout << "Clap_TP Constructor :" << BLUE << name << NC <<  " is online" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout <<  "ClapTrap Destruction is called " << BLUE << this->_name << NC << " un claptraps object is mort" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
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

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "\nClapTrap " << BLUE << this->_name << NC << " attaque " << RED << target << NC <<  " à distance, causant " << RED << this->_ranged_attack_damage << NC << " points de dégâts !" << std::endl;
	return ;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "\nClapTrap " << BLUE << this->_name << NC << " attaque " << RED <<  target << NC << " à Melee, causant " << RED << this->_melee_attack_damage << NC << " points de dégâts !" << std::endl;
}

//be hited by others
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points + (int)this->_armor_damage_reduction >= (int)amount)
	{
		this->_hit_points += this->_armor_damage_reduction - amount;
		std::cout << "ClapTrap " << RED << this->_name << NC << " lost " << RED << (amount - this->_armor_damage_reduction) << NC << " points damage" << std::endl << "NOW " << RED << this->_name << NC << " HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << YELLOW << "SOS " RED << this->_name << NC << " a plus de HP" << std::endl;
	}

	return ;
}

//get hit point
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points + (int)amount >= this->_max_hit_points)
		this->_hit_points =this->_max_hit_points;
	else
		this->_hit_points += (int)amount;
	std::cout << "ClapTrap " << RED << this->_name << NC << " get repaired of : " << RED << amount << NC << " NOW HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	return ;
}
