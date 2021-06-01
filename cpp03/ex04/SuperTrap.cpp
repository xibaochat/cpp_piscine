#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	std::cout << "SuperTrap Defaut constructor is called" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name)
:
	ClapTrap(
		100,
		100,
		120,
		120,
		1,
		name,
		60,
		20,
		5), FragTrap(name), NinjaTrap(name)//frag and ninja won't call ClapTrap car on a met "virtual public ClapTrap in header file"
{
	std::cout << "SuperTrap Constructor :" << BLUE << name<< NC << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src): ClapTrap(src){return ;}

SuperTrap::~SuperTrap(void)
{
	std::cout <<  "SuperTrap Destruction " << BLUE << this->ClapTrap::_name << NC << " in SuperTrap object is mort" << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}
