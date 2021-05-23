# include "Fixed.hpp"

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->fractional_bit_nb;
	return ;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->fractional_bit_nb));
	return ;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << this->fractional_bit_nb));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> this->fractional_bit_nb);
}

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed (Fixed const & instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
	return ;
}

Fixed & Fixed::operator=( Fixed const & instance)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &instance)
		this->_value = instance.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw)
{
	this->_value = raw;
	return ;
}

std::ostream & operator<<( std::ostream &o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}
