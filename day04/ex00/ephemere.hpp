#ifndef EPHEMERE_H
# define EPHEMERE_H

#include "Victim.hpp"

class Ephemere: public Victim
{
private:
	Ephemere(void);
public:
	Ephemere(std::string);
	Ephemere(Ephemere const &);
	~Ephemere(void);
	Ephemere & operator=( Ephemere const &);
	virtual void getPolymorphed()const;
};

#endif
