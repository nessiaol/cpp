#include "phonebook.hpp"

int main()
{
    PhoneBook   pb;
    int i = 0;
	pb.counter = 0;

    std::string command;
    while (1)
    {
		std::cout << "ADD / SEARCH / EXIT: ";
    	std::getline(std::cin,command);
    	if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			pb.user[i++] = pb.addContact();
			if (pb.counter > 7)
				pb.counter = 7;
			pb.counter++;
		}
        else if (command == "SEARCH")
        {
            //DISPLAY TABELLA CONTATTI (index, name, last name, nickname)
			std::cout << "+----------+----------+----------+----------+" << "\n";
			std::cout << "|   INDEX  |  F. NAME | L. NAME  | NICKNAME |" << "\n";
			std::cout << "+----------+----------+----------+----------+" << "\n";
			int y = 1;
			while (y <= pb.counter)
			{
				std::cout << "|" << std::setw(10) << std::to_string(y) << "|" << pb.trunc(pb.user[y-1].getName()) << "|" << pb.trunc(pb.user[y-1].getLastName()) << "|" << pb.trunc(pb.user[y-1].getNickName()) << "|" << std::endl;
				y++;
			}
			std::cout << "+----------+----------+----------+----------+" << "\n";
			//richiesta index
			std::cout << "Scegli un contatto da visualizzare (index number): ";
			std::string x;
			
			std::getline(std::cin, x);
			int num = std::stoi(x);
			if (num > pb.counter)
				std::cout << "Contatto non presente" << std::endl;
			else
			{
				std::cout << "Contatto numero : " << num << std::endl;
				std::cout << "First Name: " << pb.user[num-1].getName() << std::endl
							<< "Last Name: " << pb.user[num-1].getLastName() << std::endl
							<< "Nick Name: " << pb.user[num-1].getNickName() << std::endl
							<< "Phone Number: " << pb.user[num-1].getNumber() << std::endl
							<< "Darkest Secret: " << pb.user[num-1].getSecret() << std::endl;
			}
        }
		else if (command == "EXIT")
			break;
        else
			std::cout << "ti ho detto di scrivere ADD o SEARCH o EXIT." << std::endl;
    }   
    
}