#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

class Cure: public AMateria
{
public:
	Cure(void);
	Cure(Cure const &);
	~Cure();
	Cure & operator=( Cure const &);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
