#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist(void):AWeapon("Power Fist", 8, 50){
	return ;
}
PowerFist::~PowerFist(void){return ;}

void PowerFist::attack() const
{
	std::cout << RED << "* pschhh... SBAM! *" << NC << std::endl;
	return ;
}

PowerFist & PowerFist::operator=( PowerFist const & rhs)
{
	if (this != &rhs)
        AWeapon::operator=(rhs);
    return (*this);
}

PowerFist::PowerFist(PowerFist const &src):AWeapon(src){return ;}
