#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	try
	{
		Form f("ff", 100, 100);
		Bureaucrat b("baby", 150);
		std::cout << f << b << std::endl;
		b.signForm(f);
	}
	catch(std::exception const &e)
	{
		std::cerr << "In first module:" << RED << e.what() << NC << std::endl;
	}
	try
	{
		Form f("ff", 180, 100);
	}
	catch(std::exception const &e)
	{
		std::cerr << "In second module" << RED << e.what() << NC << std::endl;
	}
	try
	{
		Form f("ff", -180, 100);
	}
	catch(std::exception const &e)
	{
		std::cerr << "In third module" << RED << e.what() << NC << std::endl;
	}
	try
	{
		Form ff("ff", 10, 12);
		Bureaucrat bb("bb", 2);
		std::cout << ff << bb << std::endl;
		ff.beSigned(bb);
		bb.signForm(ff);
		Form obj = ff;
		std::cout << obj << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "In fouth module" << RED << e.what() << NC << std::endl;
	}
	try
	{
		Form ff("ff", 1, 1);
		Bureaucrat bb("bb", 150);
		ff.beSigned(bb);
		bb.signForm(ff);
	}
	catch(std::exception const &e)
	{
		std::cerr << "In fifth module" << RED << e.what() << NC << std::endl;
	}
	return (0);
}
