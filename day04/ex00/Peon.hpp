#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon(void);
public:
	Peon(std::string);
	Peon(Peon const &);
	~Peon(void);
	Peon & operator=( Peon const &);
	virtual void getPolymorphed()const;
};

#endif
