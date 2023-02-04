 #include "Point.hpp"

Fixed   sign(Point const p1, Point const p2, Point const p3)
{
    Fixed area((p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y()) - (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y()));
    if (area < 0)
        area = area * -1;
    return(area / 2);

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed  d1, d2, d3, S, d;
    
    S = sign(a, b, c);
    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    d = d1 + d2 + d3;
    std::cout << "S = " << S << std::endl;
    std::cout << "d = " << d << std::endl;
    if (d > S)
        return 0;
    else
        return 1;
}

/*
 * Find the area of a triangle. This function uses the 1/2 determinant
 * method. Given three points (x1, y1), (x2, y2), (x3, y3):
 *             | x1 y1 1 |
 * Area = .5 * | x2 y2 1 |
 *             | x3 y3 1 |
 *             | x1 y1 1 |      
 *
 * = .5 |(x1 - x3)(y2 - y3) - (x2 - x3)(y1 - y3)|
 */