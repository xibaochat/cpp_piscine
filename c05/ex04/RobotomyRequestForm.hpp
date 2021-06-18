#ifndef ROBOTMYREQUESTFORM_H
# define ROBOTMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string _target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm const &);
	virtual void beExecuted() const;
	class Robot_err: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif
