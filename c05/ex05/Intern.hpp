#ifndef INTERN_H
# define INTERN_H

#include "Form.hpp"

class Intern
{
private:

public:
	Intern(void);
	~Intern(void);
	Intern(Intern const &);
	Intern & operator=(Intern const &);
	Form *makeForm(std::string form_name, std::string target);
};

#endif
