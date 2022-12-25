#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "ephemere.hpp"

Ephemere::Ephemere(void){
	return ;}

Ephemere::Ephemere(Ephemere const &src):Victim(src){
	return ;
}

Ephemere::Ephemere(std::string name):Victim(name)
{
	std::cout << BLUE << "[Ephemere constructor ] " << NC << this->get_name() << " :Biu Biu." << NC << std::endl;
	return ;
}
Ephemere::~Ephemere()
{
	std::cout << BLUE "[Ephemere destructor ] " << this->get_name() << NC << " Wuwuwu..." << std::endl;
	return ;
}

Ephemere & Ephemere::operator=(Ephemere const & rhs)
{
	if (this != &rhs)
        Victim::operator=(rhs);
    return (*this);
}

void Ephemere::getPolymorphed() const
{
	std::cout << SLASH << BLUE << this->get_name() << " has been turned into a smiling kitten!" << NC << std::endl;
	return ;
}
