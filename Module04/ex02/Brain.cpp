#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++){
		ideas[i] = "fatma" + std::to_string(i);
	}
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& Brain_Copy)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = Brain_Copy.getIdeas(i);
}

Brain& Brain::operator=(const Brain& Brain_Copy)
{
	std::cout << "Brain Copy Assignation Operator Called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = Brain_Copy.getIdeas(i);
	return *this;
}


Brain::~Brain()
{
	std::cout << "Brain Deconstructor Called" << std::endl;
}

std::string Brain::getIdeas(int i) const {
	return ideas[i];
}

void Brain::setIdeas(const std::string& idea, int i)
{
	ideas[i] = idea;
}