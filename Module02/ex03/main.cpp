#include "Point.hpp"

int main( void )
{
	Point a1(2, 0);
	Point b1(0, 5);
	Point c1(-3, 0);
	Point p2(0, 0);

	if(bsp(a1, b1, c1, p2))
		std::cout << "in the triangle" << std::endl;
	else
		std::cout << "out of the triangle" << std::endl;	
}

/*
int main( void )
{
	Point a1(-3, -2);
	Point b1(1, 5);
	Point c1(5, -2);
	Point p1(4, 4);
	Point p2(0, 0);

	if(bsp(a1, b1, c1, p1))
		std::cout << "in the triangle" << std::endl;
	else
		std::cout << "out of the triangle" << std::endl;	
	
	if(bsp(a1, b1, c1, p2))
		std::cout << "in the triangle" << std::endl;
	else
		std::cout << "out of the triangle" << std::endl;	
}*/