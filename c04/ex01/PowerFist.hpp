#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:
public:
	PowerFist(void);
	~PowerFist();
	PowerFist(PowerFist const &);
	PowerFist & operator=( PowerFist const &);
	virtual void attack() const;
};

#endif
