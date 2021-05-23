#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static int const fractional_bit_nb = 8;
public:
	Fixed (void);
	~Fixed (void);
	Fixed(Fixed const & );
	Fixed(int const);
	Fixed(float const);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed & operator=( Fixed const & );
	int getRawBits( void ) const;
	void setRawBits( int const );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif
