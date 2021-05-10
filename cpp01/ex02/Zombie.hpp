#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

const std::string name_arr[10] = {
	"cat", "dog", "chicken", "duck", "horse",
	"butterfly", "monkey", "tiger", "rabbit", "mouton"};

class Zombie
{
private:
	std::string _name;
	std::string _type;

public:
	Zombie(std::string, std::string);
	void announce(void);
};

#endif
