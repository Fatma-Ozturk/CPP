#include "Span.hpp"

Span::Span(){}
	
Span::Span(unsigned int n)
{
	v.reserve(n);
}
Span::Span(const Span& S_Copy) : v(S_Copy.v)
{
	*this = S_Copy;
}
Span& Span::operator=(const Span& S_Copy)
{
	v.clear();
	v = S_Copy.v;
	return *this;
}
Span::~Span()
{
	v.clear();
}

void Span::addNumber(int number)
{
	if (v.size() == v.capacity())
		throw OverflowExpection();
	v.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator i = begin;

	if (v.size() == v.capacity())
		throw OverflowExpection();
	while (i != end)
	{
		v.push_back(*i);
		if (v.size() == v.capacity())
			break ;
		i++;
	}
}

int Span::shortestSpan()
{
	if(v.size() < 2)
		throw FewExpection();
	std::sort(v.begin(), v.end());//-8,-3,0,4
	int temp = v[1] - v[0];
	for (size_t i = 0; i < v.size() - 1; i++)
	{
		if (temp > v[i + 1] - v[i])
			temp = v[i + 1] - v[i];
	}
	return temp;
}

int Span::longestSpan()
{
	if(v.size() < 2)
		throw FewExpection();
	return *std::max_element(v.begin(), v.end()) - *std::min_element(v.begin(), v.end());
}

const char* Span::OverflowExpection::what() const throw ()
{
	return "No Space";
}

const char* Span::FewExpection::what() const throw ()
{
	return "Not Enough Number";
}