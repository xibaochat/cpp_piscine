#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle(void):AWeapon("Plasma Rifle", 5, 21){
	return ;
}
PlasmaRifle::~PlasmaRifle(void){return ;}

void PlasmaRifle::attack() const
{
	std::cout << RED << "* piouuu piouuu piouuu *" << NC << std::endl;
	return ;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs)
{
	if (this != &rhs)
        AWeapon::operator=(rhs);
    return (*this);
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src):AWeapon(src){return ;}
