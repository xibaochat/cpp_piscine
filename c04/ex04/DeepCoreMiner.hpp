#ifndef DEEPCOREMINER_H
# define DEEPCOREMINER_H

#include "IMiningLaser.hpp"

class   IAsteroid;

class DeepCoreMiner: public IMiningLaser
{
public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const &);
	DeepCoreMiner & operator=( DeepCoreMiner const &);
	virtual ~DeepCoreMiner();
	void mine(IAsteroid*);
};

#endif
