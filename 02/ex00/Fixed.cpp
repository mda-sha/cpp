#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    val = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &other)
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

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

void Fixed::setRawBits(int const raw)
{
    val = raw;
}