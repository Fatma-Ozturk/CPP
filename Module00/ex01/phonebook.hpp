#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Contact
{
    private:
        std::string name;
        std::string last_name;
        std::string nickname;
        std::string no;
        std::string secret;
    public:

    Contact();
    ~Contact();

    void  setName(std::string name){
        this->name = name;
        }

    void  setLastName(std::string last_name){
        this->last_name = last_name;
        }

    void  setNickname(std::string nickname){
        this->nickname = nickname;
        }

    void  setNo(std::string no){
        this->no = no;
            }

    void  setSecret(std::string secret){
        this->secret = secret;
        }

    std::string  getName(){
        return name;
    }
    std::string  getLastName(){
        return last_name;
    }
    std::string  getNickname(){
        return nickname;
    }
    std::string  getNo(){
        return no;
    }
    std::string  getSecret(){
        return secret;
    }
/*Contact(std::string name, std::string last_name, std::string nickname, int no, std::string secret){
    this->name = name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->no = no;
    this->secret = secret;
}*/

 
};

class PhoneBook
{
private:
    Contact person[8];

public:

PhoneBook();
~PhoneBook();

//void    add_contact(std::string name, std::string last_name, std::string nickname, std::string no, std::string secret, PhoneBook *Book);

Contact getPerson(int i){
        return person[i];
    }

std::string  get_Name(int i){
    return person[i].getName();
    }

std::string  get_LastName(int i){
    return person[i].getLastName();
    }

std::string  get_Nickname(int i){
    return person[i].getNickname();
    }
    
std::string  get_No(int i){
    return person[i].getNo();
    }

std::string  get_Secret(int i){
    return person[i].getSecret();
    }

void  set_Name(int i, std::string name){
    return person[i].setName(name);
    }

void    set_LastName(int i, std::string lastname){
    return person[i].setLastName(lastname);
    }

void  set_Nickname(int i, std::string nickname){
    return person[i].setNickname(nickname);
    }

void  set_No(int i, std::string no){
    return person[i].setNo(no);
    }    

void  set_Secret(int i, std::string secret){
    return person[i].setSecret(secret);
    }
    
};

void    printBook(PhoneBook *Book);
void    add_contact(std::string name, std::string last_name, std::string nickname, std::string no, std::string secret, PhoneBook *Book);
void    addBook(PhoneBook *Book);
void    search(PhoneBook *Book);



#endif
