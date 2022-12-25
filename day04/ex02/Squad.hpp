#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int _count;
	ISpaceMarine** _units_array;
public:
	Squad(void);
	Squad(Squad const &);
	Squad & operator=( Squad const &);
	virtual ~Squad(void);

	ISpaceMarine** get_units_arr();
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
};

#endif
