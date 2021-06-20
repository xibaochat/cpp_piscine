#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

std::string  gen_random(int len)
{
	std::string s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i)
	{
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return s;
}

int main()
{
	srand (time(NULL));
	CentralBureaucracy cat_ambassade;
	std::cout << YELLOW <<  "[SET OFFICEBLOCK]" << NC << std::endl;


	Bureaucrat *b_ptr = new Bureaucrat[50];
	for(int i = 0; i < 50; i++)
	{
		cat_ambassade.eat(b_ptr[i]);
	}
	std::cout << YELLOW << "[SET TARGET]" << NC << std::endl;
	for(int i = 0; i < 20; i++)
		cat_ambassade.queueUp(gen_random(rand() % 10 + 10));
	cat_ambassade.doBureaucracy();
	delete [] b_ptr;
	return (0);
}
