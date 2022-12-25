#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm & operator=(PresidentialPardonForm const &);
	virtual void beExecuted() const;
};

#endif
