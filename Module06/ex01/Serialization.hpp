#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>

class Data
{
private:
	std::string ModelName;
	unsigned int year;
	
public:
	Data();
	Data(std::string ModelName, unsigned int year);
	Data(const Data& D_Copy);
	Data& operator=(const Data& D);
	~Data();

	std::string get_ModelName();
	unsigned int get_year();
	void print();

};
uintptr_t serialize(Data* ptr); //data pointer to unsigned int
Data* deserialize(uintptr_t raw); //unsigned int to data pointer

#endif