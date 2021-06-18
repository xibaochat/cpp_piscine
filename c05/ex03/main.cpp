#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bb("bb", 1);
	Intern someRandomIntern;
	Form *rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	bb.signForm(*rrf);
	bb.executeForm(*rrf);
	Form *ss;
	ss = someRandomIntern.makeForm("shrubbery creation", "petit vert");
	bb.signForm(*ss);
	bb.executeForm(*ss);

	Form *pp;
	pp = someRandomIntern.makeForm("presidential pardon", "boss");
	bb.signForm(*pp);
	bb.executeForm(*pp);

	Form *fail_test;
	fail_test = someRandomIntern.makeForm("wrong function name", "boss");
	if (fail_test)
	{
		bb.signForm(*fail_test);
		bb.executeForm(*fail_test);
	}
	delete rrf;
	delete ss;
	delete pp;
	return 0;
}
