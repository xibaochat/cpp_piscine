#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return ;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}

void Zombie::set_type(std::string type)
{
	this->_type = type;
	return ;
}
