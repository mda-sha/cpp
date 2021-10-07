#include "Point.hpp"

Point::Point()
{
    // x = 0;
    // y = 0;
}

Point::~Point()
{

}

Point::Point(Point const &old)
{
    *this = old;
}

Point::Point(float const xx, float const yy) : x(xx), y(yy)
{
    return;
}

float Point::getX() const
{
    return x.toFloat();
}

float Point::getY() const
{
    return y.toFloat();
}

Point &Point::operator =(Point const &other)
{
    // if (this == &other)
    //     return *this;
    // this->x = other.getX();
    // this->y = other.getY();
    if (this == &other)
        return *this;
    return *this;
}