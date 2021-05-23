#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
private:
	int _value;
	static int const fractional_bit_nb = 8;
public:
	Fixed (void);
	~Fixed (void);
	Fixed(Fixed const & );
	Fixed & operator=( Fixed const & );
	int getRawBits( void ) const;
	void setRawBits( int const );
};

#endif
