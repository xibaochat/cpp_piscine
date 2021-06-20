#ifndef CENTRALBUREAUCRACY_H
# define CENTRALBUREAUCRACY_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

class CentralBureaucracy
{
public:
	int index;
	int target_index;

	std::string target_arr[20];
public:
	OfficeBlock *office_ptr;
	CentralBureaucracy(void);
	~CentralBureaucracy(void);
	void eat(Bureaucrat &);
	void queueUp(std::string target);
	void doBureaucracy();
};

#endif
