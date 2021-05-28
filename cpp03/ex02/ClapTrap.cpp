# include "ClapTrap.hpp"

void	truncate(std::string str, size_t width)
{
	if (str.length() > width)
		std::cout << "|" + str.substr(0, width - 1) + ".";
	else
		std::cout << "|" <<  std::setw(width) << str;
}

void Claptraps::show_info(void)
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

Claptraps::Claptraps(void){
	std::cout << "ClapTrap defaut constructoris called" << std::endl;
	return ;}

Claptraps::Claptraps(std::string name):_name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "Clap_TP Constructor :" << BLUE << name << NC <<  " is online" << std::endl;
	return ;
}

Claptraps::Claptraps(Claptraps const &src)
{
	*this = src;
	return ;
}

Claptraps::~Claptraps(void)
{
	std::cout <<  "Claptraps Destruction is called " << BLUE << this->_name << NC << "un claptraps object is mort" << std::endl;
	return ;
}

Claptraps & Claptraps::operator=(Claptraps const & rhs)
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

void Claptraps::rangedAttack(std::string const & target)
{
	std::cout << "\nClaptraps " << BLUE << this->_name << NC << " attaque " << RED << target << NC <<  " à distance, causant " << RED << this->_ranged_attack_damage << NC << " points de dégâts !" << std::endl;
	return ;
}

void Claptraps::meleeAttack(std::string const & target)
{
	std::cout << "\nClaptraps " << BLUE << this->_name << NC << " attaque " << RED <<  target << NC << " à Melee, causant " << RED << this->_melee_attack_damage << NC << " points de dégâts !" << std::endl;
}

//be hited by others
void Claptraps::takeDamage(unsigned int amount)
{
	if (this->_hit_points + this->_armor_damage_reduction - (int)amount >= 0)
	{
		this->_hit_points += this->_armor_damage_reduction - amount;
		std::cout << "Claptraps " << RED << this->_name << NC << " lost " << RED << (amount - this->_armor_damage_reduction) << NC << " points damage" << std::endl << "NOW " << RED << this->_name << NC << " HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	}
	else
	{
		this->_hit_points = 0;
		std::cout << YELLOW << "SOS " RED << this->_name << NC << " a plus de HP" << std::endl;
	}

	return ;
}

//get hit point
void Claptraps::beRepaired(unsigned int amount)
{
	if (this->_hit_points + (int)amount >= this->_max_hit_points)
		this->_hit_points =this->_max_hit_points;
	else
		this->_hit_points += (int)amount;
	std::cout << "Claptraps " << RED << this->_name << NC << " get repaired of : " << RED << amount << NC << " NOW HP is: " << GREEN << this->_hit_points  << NC << std::endl << std::endl;
	return ;
}
