#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm> //find
#include <exception>

class Error : public std::exception
{
	const char* what() const throw() { return "Error: not found"; }
};

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	
	if (iter == container.end())
		throw Error();
	return iter;
}


#endif