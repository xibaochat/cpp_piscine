# include "Victim.hpp"
# include "Sorcerer.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	return ;
}

std::string Victim::get_name() const
{
	return (this->_name);
}

Victim & Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
		this->_name = rhs.get_name();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
    o << ORANGE << "[Victim presentation  ] " << NC << "I am " << ORANGE << rhs.get_name() << NC <<  " and I like otters!" << std::endl;
    return (o);
}

Victim::Victim(std::string name):_name(name)
{
	std::cout << ORANGE << "[Victim constructor   ] " << NC << "Some random victim called " << ORANGE << name << NC << " just appeared!" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << ORANGE << "[Victim destructor    ] " << NC << "Victim " << ORANGE << this->get_name() << NC << " just died for no apparent reason!" << std::endl;
	return ;
}

void Victim::getPolymorphed() const
{
	std::cout << SLASH << ORANGE << this->get_name() << " has been turned into a cute little sheep!" << NC << std::endl;
	return ;
}
