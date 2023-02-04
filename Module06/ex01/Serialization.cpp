#include "Serialization.hpp"

Data::Data() : ModelName("Hyundai"), year(2010)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Data::Data(std::string ModelName, unsigned int year) : ModelName(ModelName), year(year)
{
	std::cout << "Constructor Called" << std::endl;
}

Data::Data(const Data& D_Copy)
{
	*this = D_Copy;
	std::cout << "Copy Constructor Called" << std::endl;
}

Data& Data::operator=(const Data& D)
{
	std::cout << "Assignment Operator Called" << std::endl;
	ModelName = D.ModelName;
	year = D.year;
	return *this;
}

Data::~Data()
{
	std::cout << "Destructor Called" << std::endl;
}

std::string Data::get_ModelName()
{
	return ModelName;
}

unsigned int Data::get_year()
{
	return year;
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

void Data::print()
{
	std::cout << "Address : " << this << std::endl;
	std::cout << "Model Name : " << ModelName << std::endl;
	std::cout << "Year : " << year << std::endl;
}