#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define NINJA_ATTACK "NINJA-TP " << BLUE << this->_name << NC << " attck secretly " << RED << obj.get_name() << NC << " cause" << RED << " 10 " << NC << "point lost" << std::endl << BLUE << this->_name << YELLOW << " lost 25 ponits EP" << NC
#define NINJA_EP BLUE << this->_name << NC << " EP is " << YELLOW << this->_energy_points << NC
#define NINJA_NO_EP "NINJA-TP " << BLUE << this->_name << YELLOW << " a plus d'energie pour lancer cette action :(..." << NC

class NinjaTrap: public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string);
	NinjaTrap(NinjaTrap const &);
	virtual ~NinjaTrap(void);
	NinjaTrap & operator=( NinjaTrap const & );
	void ninjaShoebox(FragTrap  &);
	void ninjaShoebox(ClapTrap &);
	void ninjaShoebox(ScavTrap  &);
	void ninjaShoebox(NinjaTrap &);
};

#endif
