#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point(Fixed const x, Fixed const y);
    Point(const float a, const float b);
    Point(Point const &Copy);
    Point &operator=(Point const &other);
    Point();
    ~Point();

    const Fixed& get_x(void) const;
	const Fixed& get_y(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
