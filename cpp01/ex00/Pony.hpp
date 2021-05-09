# ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony
{
private:
	std::string _name;
	std::string _sex;
	std::string _color;
	int _age;
	int _weight;
public:
	Pony(std::string, std::string, std::string, int, int);
	~Pony();
	void ShowInfo(void);
};

#endif
