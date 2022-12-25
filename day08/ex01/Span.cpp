#include "Span.hpp"

Span::Span(unsigned int size):_size(size)
{}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span(){}

Span & Span::operator=( Span const & rhs)
{
	if (this == &rhs)
        return (*this);
	this->_size = rhs._size;
	this->v = rhs.v;
	return (*this);
}

std::vector<int> Span::get_vector()
{
	return this->v;
}

void Span::addNumber(int n)
{
	if (this->v.size() >= this->_size)
		throw std::exception();
	this->v.push_back(n);
}

void Span::addNumber(unsigned int start, unsigned int end, int n)
{
	if (end >= this->_size)
		throw std::exception();
	if (start >= end)
		throw std::exception();
	if (end > this->v.size())
		this->v.resize(end);
	std::fill (this->v.begin() + start, this->v.begin() + end, n);
}

int Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw std::exception();
	std::sort(v.begin(), v.end());
	int min = *(v.begin() + 1) - *(v.begin());
	for(unsigned int i =1; i < this->v.size() - 1; i++)
	{
		int a = *(v.begin() + i + 1) - *(v.begin() + i);
		if (a < min)
			min = a;
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->v.size() <= 1)
		throw std::exception();
	int max = *std::max_element(v.begin(), v.end());
	int min = *std::min_element(v.begin(), v.end());
	return (max - min);
}
