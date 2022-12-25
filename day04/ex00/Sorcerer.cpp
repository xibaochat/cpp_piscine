# include "Sorcerer.hpp"
# include "Victim.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	return ;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    o << CYAN << "[Sorcerer presentation] " << NC << "I am " << RED << rhs.get_name() << NC << ", " << MAGENTA << rhs.get_title() << NC << ", and I like ponies!" << std::endl;
    return (o);
}

Sorcerer::Sorcerer(std::string name, std::string title):_name(name), _title(title)
{
	std::cout << CYAN << "[Sorcerer constructor ] " << RED << name << NC << ", " << MAGENTA << title << NC << ", " << YELLOW << "is born!" << NC << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << CYAN << "[Sorcerer destructor  ] " << RED << this->_name << NC << ", " << MAGENTA << this->_title << NC <<  ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

std::string Sorcerer::get_name() const
{
	return (this->_name);
}

std::string Sorcerer::get_title() const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
	return ;
}
