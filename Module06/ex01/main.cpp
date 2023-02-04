#include "Serialization.hpp"

int main(void)
{
	Data *before = new Data("Toyota", 2020);

	uintptr_t ptr = serialize(before);
	Data *after = deserialize(ptr);
	before->print();
	std::cout << std::endl;
	after->print();
	delete before;
}

