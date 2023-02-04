#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>


template <class T> 
class Array
{
private:
	T *array;
	unsigned int n;
public:
	Array() : array(NULL), n(0) {}
	
	Array(unsigned int n) : n(n)
	{
		array = new T[n];
	}
	Array(const Array& Array_Copy) : array(NULL), n(0)
	{
		*this = Array_Copy;
	}

	Array& operator=(const Array& A)
	{
		if (n > 0)
			delete[] this->array;
		if (A.n)
		{
			array = new T[A.n];
			for (unsigned int i = 0; i < A.n; i++)
				array[i] = A.array[i];
			n = A.n;
		}
		n = A.n;
		return *this;
	}

	~Array(){delete[] array;}

	
	T& operator[](unsigned int i) //[i] kullanabilmek için, class[i] tanımlı değil
	{
		if (i < 0 || i >= n)
			throw Array<T>::Error();
		return array[i];
	}

	const T& operator[](unsigned int i) const //const Array<int> a(5), constlu tanımlamalar için
	{
		if (i < 0 || i >= n)
			throw Array<T>::Error();
		return array[i];
	}
	unsigned int size()
	{
		return n;
	}

	class Error : public std::exception
	{
		const char* what() const throw()
		{
			return "index error";
		}
	};

};





#endif