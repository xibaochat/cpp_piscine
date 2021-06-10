#ifndef AMATERIA_H
# define AMATERIA_H

class AMateria;

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
private:
	AMateria(void);
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &);
	AMateria & operator=( AMateria const &);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
