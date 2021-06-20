#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form* (*Form_MemFn) (std::string  target);

Form *create_shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *robotMyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *president_pardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern(void)
{
    return ;
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern(void)
{
    return ;
}

Intern  &Intern::operator=(Intern const &src)
{
    (void)src;
    return (*this);
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	std::string f_names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form_MemFn forms[3] = {&create_shrubbery, &robotMyRequest, &president_pardon};

	int i = 0;
	while (i < 3)
	{
		if (f_names[i] == form_name)
		{
			std::cout << BLUE << "Intern creates " << form_name << NC << std::endl;
			return (*forms[i])(target);
		}
		i++;
	}
	std::cout << RED << "cannot find the function name" << NC << std::endl;
	return (NULL);
}
