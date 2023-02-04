#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int number) //int to fixed-point
{
	this->number = number << bits; //number * 2^8
	std::cout << "int to fixed " << this->number << std::endl;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) //float to fixed-point
{
	this->number = roundf(number * (1 << bits)); //roundf(number * 2^8)
	std::cout << "float to fixed " << this->number << std::endl;
	std::cout << "Float constructor called" << std::endl;
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &Copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Copy;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = other.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return number;

}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

//fixed-point to float
float Fixed::toFloat() const
{
	return ((float)number / (1 << bits)); // (number / 2^8)
}

//fixed-point to int
int Fixed::toInt( void ) const
{
	return (number >> bits);// (number / 2^8)
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}
