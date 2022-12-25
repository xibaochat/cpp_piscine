#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void):AMateria("cure")
{
	return ;
}

Cure::~Cure(void){}

Cure::Cure(Cure const &src):AMateria(src){return ;}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
        AMateria::operator=(rhs);
    return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}
