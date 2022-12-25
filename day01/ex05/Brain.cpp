#include "Brain.hpp"

std::string Brain::identify() const
{
	std::ostringstream oss;
	oss << (void *)this;
	return (oss.str());
}
