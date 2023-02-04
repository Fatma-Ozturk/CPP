#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
	static int i;
public:
	Brain();
	Brain(const Brain& Brain_Copy);
	Brain& operator=(const Brain& Brain_Copy);
	~Brain();

	std::string getIdeas(int i) const;
	void setIdeas(const std::string& idea, int i);
};



#endif