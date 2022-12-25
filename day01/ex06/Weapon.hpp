#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string w_str;
public:
	Weapon(std::string);
	std::string const & getType(void);
	void setType(std::string const);
};


#endif
