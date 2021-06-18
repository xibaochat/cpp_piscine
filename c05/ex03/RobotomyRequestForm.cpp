#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):Form(src){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}

const char* RobotomyRequestForm::Robot_err::what() const throw()
{
	return "[ERROR]Robot y echoue";
}

void RobotomyRequestForm::beExecuted() const
{
	std::cout << "psipsipsi......zzzzzz.....miaomiaomiao" << std::endl;
	int nb = rand() % 4 + 1;
	if (nb >= 3)
		std::cout << "Successfully finished 50%" << std::endl;
	else
	{
		std::cout << "Robot finish less than " << nb << "/4" << std::endl;
		throw(Robot_err());
	}
}
