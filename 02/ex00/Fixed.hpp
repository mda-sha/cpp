#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    int val;
    static const int bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed &other);
    Fixed &operator =(Fixed const &other);
    int getRawBits(void)const;
    void setRawBits(int const raw);
};
#endif