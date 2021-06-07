#ifndef KITTEN_BITE_H
# define KITTEN_BITE_H

#include "AWeapon.hpp"

class Kitten_bite: public AWeapon
{
private:
public:
	Kitten_bite(void);
	~Kitten_bite();
	Kitten_bite(Kitten_bite const &);
	Kitten_bite & operator=( Kitten_bite const &);
	virtual void attack() const;
};

#endif
