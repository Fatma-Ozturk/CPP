#include "Harl.hpp"
void Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
Harl::Harl(){}

Harl::~Harl(){}


void Harl::switch_func(int level)
{
	switch (level)
	{
	case 1:
		debug();
		level++;
	case 2:
		info();
		level++;
	case 3:
		warning();
		level++;
	case 4:
		error();
		level++;
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

void Harl::complain(std::string level) {
	int i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while(i < 3 && level != levels[i])
		i++;
	switch_func(i+1);
}