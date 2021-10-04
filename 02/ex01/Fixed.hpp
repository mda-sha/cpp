#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    int val;
    static const int bits = 8;
public:
    Fixed();
    Fixed(int nm);
    Fixed(float nm);
    ~Fixed();
    Fixed(Fixed const &other);
    Fixed &operator =(Fixed const &other);
    int getRawBits(void)const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

    std::ostream& operator <<( std::ostream& s, Fixed const & tmp );

#endif