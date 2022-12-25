#include "Comet.hpp"

Comet::Comet():_name("Asteroid"){}

Comet::~Comet(){}

Comet::Comet(Comet const &rhs)
{
    *this = rhs;
}

Comet &Comet::operator=( Comet const &rhs)
{
    (void)rhs;
    return (*this);
}

std::string Comet::beMined(DeepCoreMiner*deep) const
{
    (void)deep;
    return ("Meium");
}

std::string Comet::beMined(StripMiner*strip) const
{
    (void)strip;
    return ("Tartarite");
}

std::string  Comet::getName() const
{
    return (this->_name);
}
