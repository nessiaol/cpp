#include "phonebook.hpp"

void    Contacts::setName(std::string name)
{ 
    this->FirstName = name;
}

void    Contacts::setLastName(std::string lastname)
{
    this->LastName = lastname;
}

void    Contacts::setNickName(std::string nick)
{
    this->NickName = nick;
}

void    Contacts::setNumber(std::string number)
{
    this->PhoneNumber = number;
}

void    Contacts::setSecret(std::string secret)
{
    this->DarkestSecret = secret;
}

std::string Contacts::getName()
{
    return(this->FirstName);
}

std::string Contacts::getLastName()
{
    return(this->LastName);
}

std::string Contacts::getNickName()
{
    return(this->NickName);
}

std::string Contacts::getNumber()
{
    return(this->PhoneNumber);
}

std::string Contacts::getSecret()
{
    return(this->DarkestSecret);
}