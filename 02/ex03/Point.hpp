#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
class Point{
    Fixed const x;
    Fixed const y;
public:
    Point();
    ~Point();
    Point(Point const &old);
    Point(float const xx, float const yy);
    Point &operator =(Point const &other);
    float getX() const;
    float getY() const;
};

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif