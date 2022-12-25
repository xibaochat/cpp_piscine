# ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>

class Pony
{
private:
	std::string const _name;
	std::string const _sex;
	std::string const _color;
	int			const _age;
	int			const _weight;
	std::string const  _call;
public:
	Pony(std::string const, std::string const, std::string const, int const, int const, std::string const);
	~Pony();
	void 		ShowInfo(void) const;
	void		Pony_eat(void) const;
	void		Pony_sleep(void) const;
	void		Pony_play(void) const;
};

#endif
