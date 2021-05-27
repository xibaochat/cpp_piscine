#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iomanip>
#include <sstream>


#define GREEN       "\033[33;32m"
#define YELLOW      "\033[33;33m"
#define RED         "\033[33;31m"
#define MAGENTA     "\e[95m"
#define BLUE		"\033[1;34m"
#define NC          "\033[0m"
class ScavTrap
{
private:
	std::string _name;
	int _hit_points;
	int _max_hit_points;
	int _energy_points;
	int _max_energy_points;
	int _level;
	int _ranged_attack_damage;
	int _melee_attack_damage;
	int _armor_damage_reduction;

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &);
	~ScavTrap(void);
	ScavTrap & operator=( ScavTrap const & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void show_info(void);
	void smell_toe(std::string const &);
	void running_naked(std::string const &);
	void touch_dirty_fish(std::string const &);
	void kiss_from_a_snake(std::string const &);
	void let_u_pass(std::string const &);
	void challengeNewcomer(std::string const & target);
} ;


#endif
