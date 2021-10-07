#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    val = 0;
}

Fixed::Fixed(int nm)
{
    // std::cout << "Int constructor called" << std::endl;
    val = nm * (1 << bits);
}

Fixed::Fixed(float nm)
{
    // std::cout << "Float constructor called" << std::endl;
    val = roundf(nm * (1 << bits));
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Fixed &Fixed::operator =(Fixed const &other)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this == &other)
        return *this;
    this->val = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void)const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return val;
}

void Fixed::setRawBits(int const raw)
{
    val = raw;
}

std::ostream &operator <<( std::ostream &s, Fixed const& tmp )
{
    s << tmp.toFloat();
    return s;
}

float Fixed::toFloat( void ) const
{
    return ((float)val / (float)(1 << bits));
}

int Fixed::toInt( void ) const
{
    return (val / (1 << bits));
}

bool Fixed::operator >(Fixed const &second)
{
    return (val > second.getRawBits());
}

bool Fixed::operator <(Fixed const &second)
{
    return (val < second.getRawBits());
}

bool Fixed::operator >=(Fixed const &second)
{
    return (val >= second.getRawBits());
}

bool Fixed::operator <=(Fixed const &second)
{
    return (val <= second.getRawBits());
}

bool Fixed::operator ==(Fixed const &second)
{
    return (val == second.getRawBits());
}
bool Fixed::operator !=(Fixed const &second)
{
    return (val != second.getRawBits());
}

Fixed Fixed::operator+(Fixed const &p)
{
	Fixed	ret(toFloat() + p.toFloat());
	return ret;
}

Fixed Fixed::operator-(Fixed const &p)
{
	Fixed	ret(toFloat() - p.toFloat());
	return ret;
}

Fixed Fixed::operator*(Fixed const &p)
{
	Fixed	ret(toFloat() * p.toFloat());
	return ret;
}

Fixed Fixed::operator/(Fixed const &p)
{
	Fixed	ret(toFloat() / p.toFloat());
	return ret;
}

Fixed Fixed::operator++(int )
{
    Fixed tmp(*this);
    val++;
    return tmp;
}

Fixed Fixed::operator--(int )
{
    Fixed tmp(*this);
    val--;
    return tmp;
}
Fixed &Fixed::operator++()
{
    val++;
    return *this;
}

Fixed &Fixed::operator--()
{
    val--;
    return *this;
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
    if (first.getRawBits() < second.getRawBits())
        return first;
    return second;
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
    if (first.getRawBits() > second.getRawBits())
        return first;
    return second;
}