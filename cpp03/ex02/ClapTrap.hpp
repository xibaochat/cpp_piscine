#ifndef CLAPTRAP_H
# define CLAPTRAP_H

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
#define CYAN         "\e[36m"
class Claptraps
{
protected:
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
	Claptraps(void);
	Claptraps(std::string name);
	Claptraps(Claptraps const &);
	virtual ~Claptraps(void);
	Claptraps & operator=( Claptraps const & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void show_info(void);
};

void	truncate(std::string str, size_t width);

#endif
