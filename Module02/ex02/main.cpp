#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) - Fixed( 2 ) );
	
	std::cout << "********************arithmetic operators***********" << std::endl;
	std::cout << "a toFloat= " << a << std::endl;
	std::cout << "b toFloat= " << b << std::endl;
	std::cout << "c toFloat= " << c << std::endl;
	std::cout << "d toFloat= " << d << std::endl;
	std::cout << "e toFloat= " << e << std::endl;
	std::cout << "********************increment****************" << std::endl;
	std::cout << "a toInt= " << a.toInt() << std::endl;
	std::cout << "pre-increment ++a= "<< ++a << std::endl;
	std::cout << "a toInt= "<< a.toInt() << std::endl;
	std::cout << "a toFloat= " << a << std::endl;
	std::cout << "post-increment a++= " << a++ << std::endl;
	std::cout << "a toInt= " << a.toInt() << std::endl;
	std::cout << "a toFloat= " << a << std::endl;
	std::cout << "********************max,min***********" << std::endl;
	std::cout << "max(a, b)= " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b)= " << Fixed::min( a, b ) << std::endl;
	std::cout << "********************comprasion***********" << std::endl;
	if (b == c)
		std::cout << "b=c " << std::endl;
	else
		std::cout << "b!=c " << std::endl;
	
	return 0;
}

/*
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
*/