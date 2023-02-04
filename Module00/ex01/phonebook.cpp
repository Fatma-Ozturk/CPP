#include "phonebook.hpp"

Contact::Contact() {}

Contact::~Contact() {}

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void    add_contact(std::string name, std::string last_name, std::string nickname, std::string no, std::string secret, PhoneBook *Book)
{
    static int i = 0;
    if (i < 8)
    {
        (*Book).set_Name(i, name);
        (*Book).set_LastName(i, last_name);
        (*Book).set_Nickname(i, nickname);
        (*Book).set_No(i, no);
        (*Book).set_Secret(i, secret);
        i++;
    }
    else if (i >= 8)
    {
        i = 0;
        (*Book).set_Name(i, name);
        (*Book).set_LastName(i, last_name);
        (*Book).set_Nickname(i, nickname);
        (*Book).set_No(i, no);
        (*Book).set_Secret(i, secret);
        i++;
    }
    printBook(Book);
}
 
void    printBook(PhoneBook *Book)
{
    std::string first_tmp;
    std::string last_tmp;
    std::string nick_tmp;
    int j = 0;
    

    std::cout << "********************MY PHONE BOOK********************" << std::endl;
    std::cout << "     Index" <<  "|" << "First Name" <<  "|" << " Last Name" <<  "|" << "  Nickname" << std::endl;

    while(j < 8)
    {
        first_tmp = (*Book).get_Name(j);
        last_tmp = (*Book).get_LastName(j);
        nick_tmp = (*Book).get_Nickname(j);
        
        if ((*Book).get_Name(j).length() >= 10)
		{
			first_tmp.resize(9);
			first_tmp.resize(10, '.');
		}
		if ((*Book).get_LastName(j).length() >= 10)
		{
			last_tmp.resize(9);
			last_tmp.resize(10, '.');
		}
		if ((*Book).get_Nickname(j).length() >= 10)
		{
			nick_tmp.resize(9);
			nick_tmp.resize(10, '.');
		}
        std::cout << std::setw(10) << j <<  "|" << std::setw(10) << first_tmp <<  "|" << std::setw(10) << last_tmp <<  "|" << std::setw(10) << nick_tmp << std::endl;
        j++;
    }
}


void    addBook(PhoneBook *Book)
{
    std::string new_name;
    std::string new_last_name;
    std::string new_nickname;
    std::string new_phone;
    std::string new_secret;

    std::cout << "Please, enter name: ";
    std::cin >> new_name;
    std::cout << "Please, enter lastname: ";
    std::cin >> new_last_name;
    std::cout << "Please, enter nickname: ";
    std::cin >> new_nickname;
    std::cout << "Please, enter phone number: ";
    std::cin >> new_phone;
    std::cout << "Please, enter darkest secret: ";
    std::cin >> new_secret;

    add_contact(new_name, new_last_name, new_nickname, new_phone, new_secret, Book);
}

void    search(PhoneBook *Book)
{
    int index;

    printBook(Book);

    std::cout << "Please, enter a index: ";
    std::cin >> index;

    std::cout << (*Book).get_Name(index) << " " << (*Book).get_LastName(index) << ": " << (*Book).get_No(index) << std::endl;
}

int main()
{
    PhoneBook Book;
    std::string input;

    std::cout << "Please enter a command (SEARCH / ADD / EXIT)" << std::endl;
    
    std::cin >> input;
    while(input != "")
    {
        if (input == "ADD")
            addBook(&Book);
        else if (input == "SEARCH")
            search(&Book);
        else if (input == "EXIT")
            break ;
        else
            std::cout << "Invalid argument" << std::endl;
        std::cout << "Please enter a command (SEARCH / ADD / EXIT)" << std::endl;
        std::cin >> input;
    }
    return 0;
}