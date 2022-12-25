#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

void check(OfficeBlock &ff, std::string form, std::string target)
{
	try
	{
		ff.doBureaucracy(form, target);
	}
	catch(std::exception &e)
	{
		std::cerr << RED << e.what() << NC << std::endl;
	}
}

int main()
{
	Intern intern;
	Bureaucrat signer("ss", 5);
	Bureaucrat executor("ee", 5);
	Bureaucrat executor2("ee", 150);
	OfficeBlock tired;

	std::cout << std::endl << "---1" << std::endl;
	check(tired, "", "");

	std::cout << std::endl << "---2" << std::endl;
	tired.set_intern(intern);

	std::cout << std::endl << "---3" << std::endl;
	check(tired, "", "");

	std::cout << std::endl << "---4" << std::endl;
	tired.set_sign_bureau(signer);
	check(tired, "", "");

	std::cout << std::endl << "---5" << std::endl;
	tired.set_exe_bureau(executor);
	check(tired, "", "");

	std::cout << std::endl << "---6" << std::endl;
	check(tired, "shrubbery creation", "sad_tree");

	std::cout << std::endl << "---7" << std::endl;
	tired.set_exe_bureau(executor2);/* change Bureuacrat grade*/
	check(tired, "shrubbery creation", "sad_tree");

	std::cout << std::endl << "---8" << std::endl;
	tired.set_exe_bureau(executor);
	check(tired,  "robotomy request", "dead_robot");
	std::cout << std::endl << "---9" << std::endl;
	check(tired, "presidential pardon", "boring present");

}
