#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

#define GREEN       "\033[33;32m"
#define YELLOW      "\033[33;33m"
#define RED         "\033[33;31m"
#define MAGENTA     "\e[95m"
#define BLUE		"\033[1;34m"
#define NC          "\033[0m"
class FragTrap: virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &);
	virtual ~FragTrap(void);
	FragTrap & operator=( FragTrap const & );
	void vaulthunter_dot_exe(std::string const & target);
};


#endif
