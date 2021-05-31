# include "FragTrap.hpp"

void FragTrap::show_info(void)
{
	std::cout << "name:" << BLUE << this->_name << NC << std::endl;
	std::cout << "HP     :" << GREEN << this->_hit_points << NC << std::endl;
	std::cout << "EP     :" << YELLOW << this->_energy_points << NC << std::endl;
}

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap defaut constructoris called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name):_name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "FR4G-TP new player:" << BLUE << name << NC <<  " is joining in the war!! Now Let's fight" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout <<  "Destruction de FR4G-TP " << BLUE << this->_name << NC << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "\nFR4G-TP " << BLUE << this->_name << NC << " attaque " << RED << target << NC <<  " à distance, causant " << RED << this->_ranged_attack_damage << NC << " points de dégâts !" << std::endl;
	return ;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "\nFR4G-TP " << BLUE << this->_name << NC << " attaque " << RED <<  target << NC << " à Melee, causant " << RED << this->_melee_attack_damage << NC << " points de dégâts !" << std::endl;
}

//be hited by others
void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points + this->_armor_damage_reduction >= (int)amount)
	{
		this->_hit_points += this->_armor_damage_reduction - amount;
		std::cout << "FR4G-TP " << RED << this->_name << NC << " lost " << RED << (amount - this->_armor_damage_reduction) << NC << " points damage" << std::endl << "NOW " << RED << this->_name << NC << " HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << YELLOW << "SOS " RED << this->_name << NC << " a plus de HP" << std::endl;
	}

	return ;
}

//get hit point
void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points + (int)amount >= this->_max_hit_points)
		this->_hit_points =this->_max_hit_points;
	else
		this->_hit_points += (int)amount;
	std::cout << "FR4G-TP " << RED << this->_name << NC << " get repaired of : " << RED << amount << NC << " NOW HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand_index;

    rand_index = rand() % 5;
	std::string actionStr[] = {" avec un Judo kick of baby ours pet", " avec le coup de poney", " par mordu of milky kitten", \
							   " avec un bisous de mechant ange", " avec un cocktail toxique"};
	if (this->_energy_points >= 25)
	{
		this->_energy_points -= 25;
		std::cout << "FR4G-TP " << BLUE << this->_name << NC << " attack " << RED << target << NC << actionStr[rand_index] << std::endl << "FR4G-TP" << BLUE << this->_name << YELLOW << " EP: " << this->_energy_points << NC << std::endl;

	}
	else
		std::cout << "FR4G-TP " << BLUE << this->_name << YELLOW << " EP : 0" << NC << " a plus d'energie pour lancer cette action :(..." << NC << std::endl;
}
