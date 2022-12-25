#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void):AMateria("ice")
{
	return ;
}

Ice::~Ice(void){}

Ice::Ice(Ice const &src): AMateria(src){return ;}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
