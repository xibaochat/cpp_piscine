#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine & operator=( TacticalMarine const &);
	virtual ~TacticalMarine(void);
	TacticalMarine(TacticalMarine const &);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
