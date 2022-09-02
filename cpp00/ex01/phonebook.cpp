#include "phonebook.hpp"

std::string	PhoneBook::trunc(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return str;
		
}

Contacts    PhoneBook::addContact()
{
    Contacts user;
    std::string input;  //input che prende getline

    std::cout << "NEW CONTACT" << std::endl;

    
    std::cout << "First name:"; //chiedere il nome
    std::getline(std::cin,input); //ricevere il nome
    user.setName(input); //salvare il nome in Firstname
    std::cout << "Last name:"; //fare lo stesso per le altre variabili
    std::getline(std::cin,input);
    user.setLastName(input);
    std::cout << "Nick name:";
    std::getline(std::cin,input);
    user.setNickName(input);
    std::cout << "Phone number:";
    std::getline(std::cin,input);
    user.setNumber(input);
    std::cout << "Darkest secret:";
    std::getline(std::cin,input);
    user.setSecret(input);

    std::cout << "contatto inserito correttamente" << std::endl;

	return(user);
}