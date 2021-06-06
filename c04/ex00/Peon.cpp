#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

Peon::Peon(void){
	return ;}

Peon::Peon(Peon const &src):Victim(src){
	return ;
}

Peon::Peon(std::string name):Victim(name)
{
	std::cout << BLUE << "[Peon constructor ] " << NC << this->get_name() << " :Zog zog." << NC << std::endl;
	return ;
}
Peon::~Peon()
{
	std::cout << BLUE "[Peon destructor ] " << this->get_name() << NC << " Bleuark..." << std::endl;
	return ;
}

Peon & Peon::operator=(Peon const & rhs)
{
	if (this != &rhs)
        Victim::operator=(rhs);
    return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << SLASH << BLUE << this->get_name() << " has been turned into a pink pony!" << NC << std::endl;
	return ;
}
