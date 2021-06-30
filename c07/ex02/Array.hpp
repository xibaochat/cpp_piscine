#ifndef ARRAY_H
# define ARRAY_H

#include <stddef.h>
#include <iostream>

#define SLASH       "\e[4m"
#define GREEN       "\033[33;32m"
#define YELLOW      "\033[33;33m"
#define RED         "\033[33;31m"
#define MAGENTA     "\e[95m"
#define BLUE        "\033[1;34m"
#define CYAN        "\e[96m"
#define ORANGE      "\e[38;5;215m"
#define NC          "\033[0m"

template< typename T>
class Array
{
public:
	Array(void);
	Array(unsigned int n);
	Array(Array const & src);
	Array & operator=(Array const & rhs);
	T & operator[](unsigned int) const;
	~Array();
	unsigned int size() const;

private:
	T *arr;
	unsigned int _size;
};




#endif
