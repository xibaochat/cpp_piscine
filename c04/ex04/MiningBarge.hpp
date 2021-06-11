#ifndef MININGBARGE_H
# define MININGBARGE_H

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	int _count;
	IMiningLaser* _arr[4];
public:
	MiningBarge();
	~MiningBarge();
	MiningBarge(const MiningBarge&);
	MiningBarge& operator=  (const MiningBarge&);

	void equip(IMiningLaser*);
	void mine(IAsteroid*) const;
};

#endif
