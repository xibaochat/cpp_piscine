#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

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

class PlasmaRifle: public AWeapon
{
private:
public:
	PlasmaRifle(void);
	~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &);
	PlasmaRifle & operator=( PlasmaRifle const &);
	virtual void attack() const;
};

#endif
