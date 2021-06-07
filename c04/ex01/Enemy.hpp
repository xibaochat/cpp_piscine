#ifndef ENEMY_H
# define ENEMY_H

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


class Enemy
{
private:
	int _hp;
	std::string _type;
protected:
	Enemy(void);
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy (Enemy const &);
	Enemy & operator=( Enemy const &);
	int getHP() const;
	std::string getType() const;
	virtual void takeDamage(int);
};

#endif
