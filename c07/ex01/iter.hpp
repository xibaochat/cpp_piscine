#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>

template< typename T>
void f(T & a)
{
	std::cout << a << std::endl;
}

template< typename T>
void iter(T* ptr, int length, void (*f)(T  &))
{
	int i = 0;
	while (i < length)
		f(ptr[i++]);
}

#endif
