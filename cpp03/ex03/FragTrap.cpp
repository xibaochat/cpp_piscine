# include "FragTrap.hpp"
# include "ClapTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Frag-TP Defaut constructor is called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	std::cout << "Frag-TP Constructor :" << BLUE << name<< NC << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src){return ;}

FragTrap::~FragTrap(void)
{
	std::cout <<  "Frag-TP Destruction " << BLUE << this->_name << NC << " in fragtrap object is mort" << std::endl;
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand_index;

    rand_index = rand() % 5;
	std::string actionStr[] = {" avec un Judo kick of baby ours pet", " avec le coup de poney", " par mordu of milky kitten", \
							   " avec un bisous de mechant ange", " avec un cocktail toxique"};
	if (this->_energy_points >= 25)
	{
		std::cout << "FR4G-TP " << BLUE << this->_name << NC << " attack " << RED << target << NC << actionStr[rand_index] << std::endl;;
		this->_energy_points -= 25;
		std::cout << "FR4G-TP " << BLUE << this->_name << YELLOW << " lost 25 EP " << NC << std::endl;
		std::cout << BLUE << this->_name << NC << " EP is " << YELLOW << this->_energy_points << NC << std::endl;

	}
	else
		std::cout << "FR4G-TP " << BLUE << this->_name << YELLOW << " a plus d'energie pour lancer cette action :(..." << NC << std::endl;
}
