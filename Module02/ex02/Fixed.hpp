#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath>

class Fixed
{
private:
	int number;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(Fixed const &Copy);
	Fixed &operator=(Fixed const &other);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const; //fixed-point to float
	int toInt( void ) const; //fixed-point to int

	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);


	static Fixed& min(Fixed &F1, Fixed &F2);
	static const Fixed& min(const Fixed &F1, const Fixed &F2);
	static Fixed& max(Fixed &F1, Fixed &F2);
	static const Fixed& max(const Fixed &F1, const Fixed &F2);

};
std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif
