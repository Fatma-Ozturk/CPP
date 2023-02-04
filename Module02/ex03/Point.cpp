#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::Point(const Fixed x, const Fixed y) :x(x), y(y)
{}

Point::Point(const float x, const float y) : x(x), y(y)
{}

Point::Point(const Point &Copy) : x(Copy.x), y(Copy.y)
{}

Point::~Point()
{}

Point& Point::operator=(Point const &other)
{
	const_cast<Fixed&>(x) = other.get_x();
	const_cast<Fixed&>(y) = other.get_y();
	return *this;
}


const Fixed& Point::get_x(void) const{
	return x;
}

const Fixed& Point::get_y(void) const{
	return y;
}