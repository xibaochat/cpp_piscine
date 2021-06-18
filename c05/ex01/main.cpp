#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	std::cout << "----TEST 1-----" << std::endl;
	try
	{
		Form("ff", 1222, 1);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----TEST 2-----" << std::endl;
	try
	{
		Bureaucrat bb("bb", 1);
		Form ff("ff", 9, 9);
		std::cout << bb << ff << std::endl;
		try
		{
			bb.increment();
			bb.increment();
			bb.increment();
			bb.signForm(ff);
		}
		catch (std::exception &e)
		{
			 std::cerr << e.what() << std::endl;
		}
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bb("bb", 10);
		Form ff("ff", 100, 100);
		bb.signForm(ff);
		bb.signForm(ff);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
