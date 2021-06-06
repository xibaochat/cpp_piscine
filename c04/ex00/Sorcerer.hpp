#ifndef SORCERER_H
# define SORCERER_H

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
#define BLUE        "\033[1;34m"
#define CYAN        "\e[96m"
#define NC          "\033[0m"

#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
protected:

public:
	Sorcerer(std::string, std::string);
	Sorcerer(Sorcerer const &);
	~Sorcerer(void);
	Sorcerer & operator=( Sorcerer const &);
	Sorcerer & operator<<( Sorcerer const &);
	std::string const & get_name() const;
	std::string const & get_title() const;
	void polymorph(Victim const &) const;
};

std::ostream & operator <<( std::ostream & o, Sorcerer const & rhs );

#endif
