#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <list>
#include <cmath>
#include  <numeric>

class Span
{
public:
	Span(unsigned int n);
	~Span();
	Span(Span const &);
	Span & operator=( Span const &);

	void addNumber(int n);
	void addNumber(unsigned int s, unsigned int e, int n);
	int shortestSpan();
	int longestSpan();
	std::vector<int> get_vector();
private:
	unsigned int _size;
	Span();
	std::vector<int> v;

};

#endif
