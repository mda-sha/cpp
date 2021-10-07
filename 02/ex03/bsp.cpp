#include "Point.hpp"

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
    float q1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
    float q2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
    float q3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
    
    if (!q1 || !q2 || !q3)
        return false;
    if (q1 < 0 && q2 < 0 && q3 < 0)
        return true;
    if (q1 > 0 && q2 > 0 && q3 > 0)
        return true;
    return false;
}