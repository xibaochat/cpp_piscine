#ifndef STRIPMINER_H
# define STRIPMINER_H

# include "IMiningLaser.hpp"

class StripMiner: public IMiningLaser
{
public:
	StripMiner();
    StripMiner(StripMiner const &);
    StripMiner & operator=( StripMiner const &);
    virtual ~StripMiner();
    void mine(IAsteroid*);
};

#endif
