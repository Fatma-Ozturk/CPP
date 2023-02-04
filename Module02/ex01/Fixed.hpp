#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include <cmath> //roundf()

class Fixed
{
private:
	int number;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int number);//int to fixed-point
	Fixed(const float number);//float to fixed-point
	Fixed(Fixed const &Copy);
	Fixed &operator=(Fixed const &Other);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const; //fixed-point to float
	int toInt() const; //fixed-point to int

};
std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif
