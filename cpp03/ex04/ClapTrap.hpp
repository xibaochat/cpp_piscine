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


class ClapTrap
{
protected:
	std::string _name;
	int _hit_points;
	int _max_hit_points;
	int _energy_points;
	int _max_energy_points;
	int _level;
	unsigned int _ranged_attack_damage;
	unsigned int _melee_attack_damage;
	unsigned int _armor_damage_reduction;

public:
	ClapTrap(void);
	ClapTrap(int, int, int, int, int, std::string, unsigned int, unsigned int, unsigned int);
	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	virtual ~ClapTrap(void);
	ClapTrap & operator=( ClapTrap const & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void show_info(void);

	int get_hp(){ return _hit_points;}
	int get_max_hp(){return _max_hit_points;}
	int get_ep(){return _energy_points;}
	int get_max_ep(){return _max_energy_points;}
	std::string get_name(){return _name;}
	int get_level(){return _level;}
	unsigned int get_range_attack_damage(){return _ranged_attack_damage;}
	unsigned int get_melee_attack_damage(){return _melee_attack_damage;}
	unsigned int get_armor_damage_reduction(){return _armor_damage_reduction;}

	void set_hp(int hp){_hit_points = hp;}
	void set_max_hp(int hp){_max_hit_points = hp;}
	void set_ep(int ep){_energy_points = ep;}
	void set_max_ep(int ep){_max_energy_points = ep;}
	void set_name(std::string name){_name = name;}
	void set_level(int level){_level = level;}
	void set_range_attack_damage(unsigned int v){_ranged_attack_damage = v;}
	void set_melee_attack_damage(unsigned int v){_melee_attack_damage = v;}
	void set_armor_damage_reduction(unsigned int v){_armor_damage_reduction = v;}

};

#endif
