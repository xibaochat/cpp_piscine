#include "whatever.hpp"

int main( void )
{
	int a, b;
	double x, y;
	std::string s1, s2;
	char c1, c2;

	std::cout << "-----SWAP TEST----" << std::endl;
	a = 10;
	b = 20;
	std::cout << "[Int TEST]Before swap a=" << a << " b=" << b << std::endl;
	::swap( a, b );
	std::cout << "After a =" << a << ", b =" << b << "\n" << std::endl;

	x = 42.42;
	y = 21.21;
	std::cout << "[Double TEST]Before swap x=" << x << " y=" << y << std::endl;
	::swap( x, y );
	std::cout << "After x =" << x << ", y =" << y << "\n" << std::endl;

	c1 = 65;
	c2 = 97;
	std::cout << "[Char TEST]Before swap c1=" << c1 << " c2=" << c2 << std::endl;
	::swap( c1, c2 );
	std::cout << "After c1 =" << c1 << ", c2 =" << c2 << "\n" << std::endl;

	s1 = "kawayi";
	s2 = "ohayogozaimasu(bonjour)";
	std::cout << "[String TEST]Before swap s1=" << s1 << ", s2=" << s2 << std::endl;
	::swap( s1, s2 );
	std::cout << "After s1 =" << s1 << ", s2 =" << s2 << "\n" << std::endl;

	std::cout << "-----MIN TEST------" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
	std::cout << "min( s1, s2 ) = " << ::min( s1, s2 ) << std::endl;
	std::cout << "-----MAX TEST------" << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
	std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;
	std::cout << "max( s1, s2 ) = " << ::max( s1, s2 ) << std::endl;

	return (0);
}
