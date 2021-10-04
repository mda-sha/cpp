#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    val = 0;
}

Fixed::Fixed(int nm)
{
    std::cout << "Int constructor called" << std::endl;
    val = nm;
}

Fixed::Fixed(float nm)
{
    std::cout << "Float constructor called" << std::endl;
    val = roundf(nm);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return;
}

Fixed &Fixed::operator =(Fixed const &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &other)
        return *this;
    this->val = other.getRawBits();
    return *this;
}

std::ostream &operator <<( std::ostream &s, Fixed const& tmp )
{
    s << tmp.toFloat();
    return s;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

void Fixed::setRawBits(int const raw)
{
    val = raw;
}