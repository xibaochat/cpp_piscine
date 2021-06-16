#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat obj("sesame", 160);
		std::cout << "obj: " << obj << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	try
	{
		Bureaucrat obj1("sesame_frere", 150);
		std::cout << "obj1: " << obj1 << std::endl;
		obj1.increment();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	try
	{
		Bureaucrat obj2("Sesame_mam", 1);
		std::cout << "obj2: " << obj2 << std::endl;
		obj2.decrement();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	return (0);
}
