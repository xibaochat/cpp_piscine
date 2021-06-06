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

std::string const & Victim::get_name() const
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
    o << CYAN << "[Victim presentation] " << NC << "I am " << rhs.get_name() <<  " and I like otters!";
    return (o);
}

Victim::Victim(std::string name)
{
	std::cout << CYAN << "[Victim constructor ] " << NC << "Some random victim called" << BLUE << name << NC << "just appeared!" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << CYAN << "[Victim destructor  ] " << NC << "Victim " << this->get_name() << " just died for no apparent reason!" << std::endl;
	return ;
}

void Victim::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a cute little sheep!" << std::endl;
	return ;
}
