#ifndef COMET_H
# define COMET_H

# include "IAsteroid.hpp"

class Comet: public IAsteroid
{
private:
	std::string _name;
public:
	Comet();
	~Comet();
	Comet(Comet const &);
    Comet & operator=(Comet const &);
    std::string beMined(DeepCoreMiner*) const;
    std::string beMined(StripMiner*) const;
    std::string getName() const;
};

#endif
