#include "Span.hpp"

void test_from_subjet()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return ;
}

void empty_test()
{
	Span s0(5);
	try
	{
		s0.shortestSpan();
	}
	catch(std::exception &bc)
	{
		std::cerr << "[ERROR]Not enough number in the vector" << std::endl;
	}
	std::cout << "------EMPTY VECTOR ADD NEW ELEMTNS-----" << std::endl;
	s0.addNumber(1);
	s0.addNumber(1);
	s0.addNumber(10);
	try
	{
		std::cout << "Shortest Span is " << s0.shortestSpan() << std::endl;
		std::cout << "Longest Span is " << s0.longestSpan() << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cerr << "[ERROR]Not enough number in the vector" << std::endl;
	}
	return ;
}

void grand_nb_test()
{
	Span s(50000);
	try
	{
		for(int i=0; i < 50000; i++)
			s.addNumber(i);
		std::cout << "Enter 0-50000\nShortest Span is " << s.shortestSpan() << std::endl;
		std::cout << "Longest Span is " << s.longestSpan() << std::endl;
	}
	catch(std::exception &bc)
    {
        std::cerr << "[ERROR]Not enough number in the vector" << std::endl;
    }
	return ;
}

void test_more()
{
    Span sp_short = Span(5);
    sp_short.addNumber(5);
    sp_short.addNumber(3);
    sp_short.addNumber(17);
    sp_short.addNumber(-8925);
    sp_short.addNumber(11);
	std::cout << "Shortest Span is " << sp_short.shortestSpan() << std::endl;
	std::cout << "Longest Span is " << sp_short.longestSpan() << std::endl;
	return ;
}

void fill_vector_in_range()
{
	Span s(20000);
	s.addNumber(1);
	s.addNumber(2);
	s.addNumber(2, 19999, 100);
	std::cout << "Shortest Span is " << s.shortestSpan() << std::endl;
	std::cout << "Longest Span is " << s.longestSpan() << std::endl;
}

int main()
{
	std::cout << "----1" << std::endl;
	test_from_subjet();
	std::cout << "----2" << std::endl;
	empty_test();
	std::cout << "----3" << std::endl;
	grand_nb_test();
	std::cout << "----4" << std::endl;
	test_more();
	std::cout << "----5" << std::endl;
	fill_vector_in_range();

	return (0);

}
