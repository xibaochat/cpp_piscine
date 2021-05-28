# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):Claptraps()
{
	std::cout << "SCAV-TP defaut Constructor in called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name):Claptraps(name)
{
	std::cout << "SCAV-TP Constructor :" << BLUE << name << NC << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src):Claptraps(src){
	return ;}

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
