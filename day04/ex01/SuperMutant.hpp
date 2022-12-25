#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
private:
public:
	SuperMutant(void);
	~SuperMutant();
	SuperMutant( SuperMutant const & );
	SuperMutant & operator=( SuperMutant const & );
	void takeDamage(int);
};

#endif
