// #include "Point.hpp"

// Point::Point()
// {
//     // x = 0;
//     // y = 0;
// }

// Point::~Point()
// {

// }

// Point::Point(Point const &old)
// {
//     *this = old;
// }

// Point::Point(float const xx, float const yy) : x(xx), y(yy)
// {
//     return;
// }

// float Point::getX() const
// {
//     return x.toFloat();
// }

// float Point::getY() const
// {
//     return y.toFloat();
// }

// Point &Point::operator =(Point const &other)
// {
//     // if (this == &other)
//     //     return *this;
//     // this->x = other.getX();
//     // this->y = other.getY();
//     if (this == &other)
//         return *this;
//     return *this;
// }


#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y( 0 ) {

	return ;
}

Point::Point( Point const &src ) {

	*this = src;
	return ;
}

Point::Point( float const x, float const y ) : _x( x ), _y( y ) {

	return ;
}

Point::~Point( void ) {

	return ;
}

Point	&Point::operator=( Point const &rhs ) {

	if (this == &rhs)
		return *this;
	return *this;
}

float	Point::getX( void ) const {

	return this->_x.toFloat();
}

float	Point::getY( void ) const {

	return this->_y.toFloat();
}