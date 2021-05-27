# include "ScavTrap.hpp"
# include "FragTrap.hpp"

void ScavTrap::show_info(void)
{
	std::string str;
	std::stringstream ss;
	std::stringstream ss1;

	truncate("NAME", 10);
	truncate("HP", 10);
	truncate("EP", 10);
	std::cout << "|" << std::endl;
	truncate(this->_name, 10);
	ss << this->_hit_points;
	truncate(ss.str() + "/100", 10);
	ss1 << this->_energy_points;
	truncate(ss1.str() + "/100", 10);
	std::cout << "|" << std::endl;
}

ScavTrap::ScavTrap(void){return ;}

ScavTrap::ScavTrap(std::string name):_name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "Il y a un nouveau et bete volontaire: " << BLUE << name << NC << \
		" n'ose pas mourire. \nOn verra sa triste histoire" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<  "SCAV-TP Destruction " << BLUE << this->_name << NC << " mort horriblement" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "\nSCAV-TP " << BLUE << this->_name << NC << " attaque " << RED << target << NC <<  " à distance, causant " << RED << this->_ranged_attack_damage << NC << " points de dégâts !" << std::endl;
	return ;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "\nSCAV-TP " << BLUE << this->_name << NC << " attaque " << RED <<  target << NC << " à Melee, causant " << RED << this->_melee_attack_damage << NC << " points de dégâts !" << std::endl;
}

//be hited by others
void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points + this->_armor_damage_reduction - (int)amount >= 0)
	{
		this->_hit_points += this->_armor_damage_reduction - amount;
		std::cout << "SCAV-TP " << RED << this->_name << NC << " lost " << RED << (amount - this->_armor_damage_reduction) << NC << " points damage" << std::endl << "NOW " << RED << this->_name << NC << " HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << YELLOW << "SOS " RED << this->_name << NC << " a plus de HP" << std::endl;
	}

	return ;
}

//get hit point
void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points + (int)amount >= this->_max_hit_points)
		this->_hit_points =this->_max_hit_points;
	else
		this->_hit_points += (int)amount;
	std::cout << "SCAV-TP " << RED << this->_name << NC << " get repaired of : " << RED << amount << NC << " NOW HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	return ;
}

void ScavTrap::smell_toe(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge: " << MAGENTA << "Sens mes doigts de pieds" << NC << std::endl;
	return ;
}

void ScavTrap::running_naked(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge:" << MAGENTA << " running naked in 42" << NC << std::endl;
	return ;
}

void ScavTrap::touch_dirty_fish(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge:" << MAGENTA << " Put your hands in the box to touch the undefined deveil fish" << NC << std::endl;
	return;
}

void ScavTrap::kiss_from_a_snake(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << NC << " Chanllenge:" << MAGENTA << " kiss with a snake" << NC << std::endl;
	return;
}

void ScavTrap::let_u_pass(std::string const & target)
{
	std::cout << "SCAV-TP " << RED << target << MAGENTA << " Sage comme toi, I let u pass." << NC << std::endl;
	return;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int rand_index;
	typedef void (ScavTrap::*action_MemFn) (std::string const & target);

	rand_index = rand() % 5;
	action_MemFn action[5] = {&ScavTrap::smell_toe, &ScavTrap::running_naked, &ScavTrap::touch_dirty_fish, &ScavTrap::kiss_from_a_snake, &ScavTrap::let_u_pass};
	(this->*(action[rand_index]))(target);
	return ;
}
