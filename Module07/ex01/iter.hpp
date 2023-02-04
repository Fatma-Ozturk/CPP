#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T> void iter(T array[], int len, void(*f)(T& arg)){
	for(int j = 0; j < len; j++)
		f(array[j]);
}

template <typename T> void call(T& a){
	std::cout << a << " ";
}

#endif