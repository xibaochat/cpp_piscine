#include "AMateria.hpp"

AMateria::AMateria(void){return ;}

AMateria::AMateria(std::string const & type):_type(type), _xp(0)
{
	return ;
}

AMateria::AMateria(AMateria const & rhs)
{
	*this = rhs;
	return ;

}

AMateria & AMateria::operator=( AMateria const &rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return (*this);
}

AMateria::~AMateria(){return ;}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
	this->_xp += 10;
}
