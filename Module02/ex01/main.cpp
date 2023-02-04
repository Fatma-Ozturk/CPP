#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed e(15);
	Fixed f(e);
	e.setRawBits(25);
	f.setRawBits(10);
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;//ostream yönlendirme, a.toFloat()
	std::cout << "b is " << b << std::endl;//as float
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.getRawBits() << std::endl;
	std::cout << "f is " << f.getRawBits() << std::endl;
	return 0;
}