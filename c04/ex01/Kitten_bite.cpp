#include "Kitten_bite.hpp"
#include "AWeapon.hpp"

Kitten_bite::Kitten_bite(void):AWeapon("Sharp_teeth", 3, 15){
	return ;
}
Kitten_bite::~Kitten_bite(void){return ;}

void Kitten_bite::attack() const
{
	std::cout << RED << "*miao miao miao *" << NC << std::endl;
	return ;
}

Kitten_bite & Kitten_bite::operator=( Kitten_bite const & rhs)
{
	if (this != &rhs)
        AWeapon::operator=(rhs);
    return (*this);
}

Kitten_bite::Kitten_bite(Kitten_bite const &src):AWeapon(src){return ;}
