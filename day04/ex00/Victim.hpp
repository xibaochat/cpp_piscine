#ifndef VICTIM_H
# define VICTIM_H

#include <string>
#include <iostream>

class Victim
{
private:
	std::string _name;
protected:
	Victim(void);
public:
	Victim(std::string);
	Victim(Victim const &);
	virtual ~Victim(void);
	Victim & operator=( Victim const &);
	Victim & operator<<( Victim const &);
	std::string get_name() const;
	virtual void getPolymorphed()const;
};

std::ostream & operator <<( std::ostream & o, Victim const & rhs );

#endif
