#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand (time(NULL));

	Bureaucrat *bb = new Bureaucrat("bb", 1);
	Form *ss = new ShrubberyCreationForm("ss");
	Form *rr = new RobotomyRequestForm("rr");
	Form *pp = new PresidentialPardonForm("pp");
	std::cout << BLUE << "----TEST Shrubbery----" << NC << std::endl;
	bb->signForm(*ss);
	bb->executeForm(*ss);

	std::cout << BLUE << "----TEST Robot----" << NC << std::endl;
	bb->signForm(*rr);
	bb->executeForm(*rr);

	std::cout << BLUE << "----TEST President----" << NC << std::endl;
	bb->executeForm(*pp);//need to sign then execute
	bb->signForm(*pp);
	bb->executeForm(*pp);

	std::cout << BLUE << "----ERR TEST Shrubbery------" << NC << std::endl;
	Form *petit_vert = new ShrubberyCreationForm("petit_vert");
	bb->executeForm(*petit_vert);

	std::cout << BLUE << "----ERR TEST1 Shrubbery------" << NC << std::endl;
	Bureaucrat *b_obj = new Bureaucrat("bb", 150);
	Form *sh = new ShrubberyCreationForm("petit_vert");
	b_obj->signForm(*sh);
	b_obj->executeForm(*sh);



	delete bb;
	delete ss;
	delete rr;
	delete pp;
	delete petit_vert;
	delete b_obj;
	delete sh;
}
