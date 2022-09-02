#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contacts.hpp"

class   PhoneBook
{
    public:
        Contacts 		user[8];
		int				counter;
        Contacts    	addContact();
		std::string		trunc(std::string str);
};

#endif