#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon & w): _name(name), _weapon(w)
{
	return ;
}
