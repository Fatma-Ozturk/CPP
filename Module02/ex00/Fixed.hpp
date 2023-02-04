#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed
{
private:
	int number;
	static const int bits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &Copy);
	Fixed &operator=(Fixed const &Other);

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif
