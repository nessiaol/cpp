#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class   Contacts
{
    public:
        //funzioni utili 
        
        //setters
        void    setName(std::string name);
        void    setLastName(std::string lastname);
        void    setNickName(std::string nick);
        void    setNumber(std::string number);
        void    setSecret(std::string secret);
        //getters
        std::string getName();
        std::string getLastName();
        std::string getNickName();
        std::string getNumber();
        std::string getSecret();

    private:
        //dati dei contatti (variabili)
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

#endif