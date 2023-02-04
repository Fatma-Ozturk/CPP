#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
private:
	std::vector<int> v;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& S_Copy);
	Span& operator=(const Span& S_Copy);
	~Span();


	void addNumber(int number);
	void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	int shortestSpan();
	int longestSpan();


	class OverflowExpection : public std::exception
	{
	public :
		const char* what() const throw();
	};

	class FewExpection : public std::exception
	{
	public :
		const char* what() const throw();
	};
};



#endif