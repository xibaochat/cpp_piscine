#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	Ice(void);
	Ice(Ice const &);
	~Ice();
	Ice & operator=( Ice const &);
	AMateria* clone() const;
	void use(ICharacter& target);
};






#endif
