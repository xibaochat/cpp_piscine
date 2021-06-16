#include "Bureaucrat.hpp"

int main()
{
	try
    {
        Bureaucrat  bureaucrat("Sesame", 5);

        std::cout << bureaucrat << std::endl;// will affich
		bureaucrat.increment();
        std::cout << bureaucrat << std::endl;// will affich
    }
    catch(std::exception const &e)
    {
        std::cerr << RED << e.what() << NC << std::endl;
    }

    try
    {
     	Bureaucrat  bureaucrat1("Sesame_mam", 1);
		std::cout << bureaucrat1 << std::endl;//will
		bureaucrat1.increment();
		std::cout << bureaucrat1 << std::endl;// show err
    }
    catch(std::exception const &e)
    {
		std::cerr << RED << e.what() << NC << std::endl;
    }
    try
    {
     	Bureaucrat  bureaucrat1("Sesame_papa", 149);

		std::cout << bureaucrat1 << std::endl;// show
		bureaucrat1.decrement();
		std::cout << bureaucrat1 << std::endl;//show
		bureaucrat1.decrement();
		std::cout << bureaucrat1 << std::endl;//err

    }
	catch(std::exception const &e)
    {
		std::cerr << RED << e.what() << NC << std::endl;
    }
	return (0);
}
