#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int number) //int to fixed-point
{
	this->number = number << bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) //float to fixed-point
{
	this->number = roundf(number * (1 << bits));
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
	return ((float)number / (1 << bits));
}

//fixed-point to int
int Fixed::toInt( void ) const
{
	return (number >> bits);
}

//operator overloads

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return os;
}



bool Fixed::operator>(const Fixed &other) const
{
	return number > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return number < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return number >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return number <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
	return number == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return number != other.getRawBits();
}

//arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
 return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

//increment/decrement

Fixed& Fixed::operator++()
{
	//++a
	number++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	//increment after copy const
	//a++;
	Fixed old(*this); //copy old value

	number++; //prefix increment
	return old; // return old value
}

Fixed& Fixed::operator--(void)
{
	number--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed other(*this);

	number--;
	return other;
}


//max-min func

Fixed& Fixed::min(Fixed &F1, Fixed &F2)
{
	if (F1.getRawBits() < F2.getRawBits())
		return F1;
	return F2;
}

const Fixed& Fixed::min(const Fixed &F1, const Fixed &F2)
{
	if (F1.getRawBits() < F2.getRawBits())
		return F1;
	return F2;
}

Fixed& Fixed::max(Fixed &F1, Fixed &F2)
{
	if (F1.getRawBits() > F2.getRawBits())
		return F1;
	return F2;
}

const Fixed& Fixed::max(const Fixed &F1, const Fixed &F2)
{
	if (F1.getRawBits() > F2.getRawBits())
		return F1;
	return F2;
}
