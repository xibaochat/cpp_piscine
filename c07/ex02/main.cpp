#include "Array.hpp"

template< typename T>
Array<T>::Array():arr(new T[0]), _size(0)
{
	return ;
}

template< typename T>
Array<T>::Array(unsigned int n):_size(n)
{
	T * a = new T();
	arr = new T[_size] {};
	for(unsigned int i=0; i < _size; i++)
		arr[i] = *a;
	delete a;
}

template< typename T>
Array<T>::Array(Array const &src)
{
	this->_size = src.size();
	this->arr = new T[src.size()]{};
	for(unsigned int i = 0; i < src.size(); i++)
		this->arr[i] = src.arr[i];
}

template< typename T>
Array<T>::~Array(void)
{
	if (arr && this->_size > 0)
		delete []arr;
	return ;
}

template< typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	if (this == &rhs)
        return (*this);
	delete [] arr;
	this->_size = rhs.size();
	this->arr = new T[rhs.size()] {};
	unsigned int i = -1;
	while (++i < this->_size)
		this->arr[i] = rhs.arr[i];
	return (*this);
}

template< typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template< typename T>
T& Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= this->_size || !this->arr)
		throw std::exception();
	return (this->arr[index]);
}

template< typename T>
void show_arr(Array<T> const & arr)
{
	for(unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;
}

int main()
{
	Array<int> tab(5);
	tab[0] = 42;
	tab[1] = 12;
	tab[2] = 21;
	std::cout << "tab size is " << tab.size() << std::endl;
	show_arr(tab);

	std::cout << "Empty tab" << std::endl;
	Array<int> tab_emepty;
	show_arr(tab_emepty);
	tab_emepty = tab;
	std::cout << "Empty tab after assignement" << std::endl;
	show_arr(tab_emepty);
	std::cout <<  BLUE << "Test " << NC << "for unaccessible memory" << std::endl;
	try
	{
		std::cout << tab[5] << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cerr << RED << "[ERROR] " << NC <<  "Out of range" << std::endl;
	}

	std::cout << "----STR TEST----" << std::endl;
	Array<std::string> colour(3);
	colour[0] = "red";
	colour[1] = "green";
	colour[2] = "blue";
	Array<std::string> obj(colour);
	std::cout << "size of obj is " << obj.size() << " and it should be 3" << std::endl;
	show_arr(obj);
	try
	{
		std::cout << "show fst blok "<< GREEN << obj[1] << NC << std::endl;
		std::cout << obj[5] << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cerr << RED << "[ERROR] " << NC <<  "Out of range" << std::endl;
	}

	std::cout << "----CHAR TEST----" << std::endl;
	Array<char> c_tab(5);
	c_tab[0] = 's';
	c_tab[1] = 'a';
	c_tab[2] = 'l';
	c_tab[3] = 'u';
	c_tab[4] = 't';
	std::cout << "char array size is " << c_tab.size() << std::endl;
	show_arr(c_tab);
	try
	{
		std::cout << c_tab[100] << std::endl;
	}
	catch(std::exception &bc)
	{
		std::cerr << RED << "[ERROR] " << NC <<  "Out of range" << std::endl;
	}
	return (0);
}
