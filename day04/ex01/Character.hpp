#ifndef CHARACTER_H
# define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iomanip>
#include <sstream>

#define SLASH       "\e[4m"
#define GREEN       "\033[33;32m"
#define YELLOW      "\033[33;33m"
#define RED         "\033[33;31m"
#define MAGENTA     "\e[95m"
#define BLUE        "\033[1;34m"
#define CYAN        "\e[96m"
#define ORANGE      "\e[38;5;215m"
#define NC          "\033[0m"

class Character
{
private:
	std::string _name;
	int _ap;
	AWeapon *weapon_ptr;
	Character(void);
public:
	Character(std::string const & name);
	virtual ~Character();
	Character(Character const &);
	Character & operator=( Character const &);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int getAp() const;
	AWeapon *get_weapon_ptr() const;
};

std::ostream & operator <<( std::ostream & o, Character const & rhs );
#endif
