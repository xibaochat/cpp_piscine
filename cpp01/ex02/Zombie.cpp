#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;

	return ;
}
