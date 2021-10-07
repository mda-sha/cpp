#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
// #include "bsp.cpp"

int main( void ) {

    // Point const A(6.0, 3.0);
    // Point const B(2.0, 6.0);
    // Point const C (8.0, 8.0);
    // Point const point (8.0, 6.0);

    Point const A(0.0, 0.0);
    Point const B(10.0, 9.0);
    Point const C (0.0, 9.0);
    Point const point (1.0, 8.0);

    if (bsp(A, B, C, point))
        std::cout << "point is inside" << std::endl;
    else
        std::cout << "point is outside" << std::endl;
    return 0;
}