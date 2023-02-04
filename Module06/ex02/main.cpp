#include "Base.hpp"

int main()
{
	Base *Base;
	Base = generate();
	if(!Base)
	{
		std::cout << "Unknown Type" << std::endl;
		return 1;
	}
	identify(Base);
	identify(*Base);

	delete Base;	
}