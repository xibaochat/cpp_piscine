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
	int			_age;
	int			_weight;
	std::string _call;
public:
	Pony(std::string, std::string, std::string, int, int, std::string);
	~Pony();
	void 		ShowInfo(void);
	void		Pony_eat(void);
	void		Pony_sleep(void);
	void		Pony_play(void);
};

#endif
