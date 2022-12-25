#include "easyfind.hpp"

template< typename T>
int easyfind(T & v, int b)
{
	typename T::iterator it = std::find(v.begin(), v.end(), b);
	if (it == v.end())
		throw std::exception();
	return *it;
}

int main()
{
	std::vector<int> v;
	std::list<int> l{1,2,3};
	std::deque<int>		deq;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	std::cout << "--------Vector Test-----" << std::endl;
	try
	{
		std::cout << "Want to find 10 ";
		easyfind(v, 10);
		std::cout << "Element Found " << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cout << "\nCannot Find Element" << std::endl;
	}

	try
    {
		std::cout << "Want to find 30 ";
		easyfind(v, 30);
        std::cout << "Element Found" << std::endl;
    }
    catch(std::exception &bc)
    {
        std::cout << "Cannot Find Element" << std::endl;
    }

	try
	{
		std::cout << "Want to find 40 ";
		easyfind(v, 40);
		std::cout << "Element Found" << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cout << "Cannot Find Element" << std::endl;
	}

	std::cout << "------List test-----------" << std::endl;
	try
	{
		std::cout << "Want to find 1 ";
		easyfind(l, 1);
		std::cout << "Element Found" << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cout << "Cannot Find Element" << std::endl;
	}

	try
    {
        std::cout << "Want to find 10 ";
        easyfind(l, 10);
        std::cout << "Element Found" << std::endl;
    }
    catch(std::exception &bc)
    {
        std::cout << "Cannot Find Element" << std::endl;
    }

	std::cout << "------Deque test-----------" << std::endl;
	for ( int i = 0 ; i < 10 ; i++ )
        deq.push_back(i);
	try
    {
		std::cout << "Want to find 4 ";
        easyfind(deq, 4);
		std::cout << "Element Found" << std::endl;
		std::cout << "Want to find 8 ";
        easyfind(deq, 8);
		std::cout << "Element Found" << std::endl;
		std::cout << "Want to find 12 ";
        easyfind(deq, 12);
		std::cout << "Element Found" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Cannot Find Element" << std::endl;
    }

	return (0);
}
