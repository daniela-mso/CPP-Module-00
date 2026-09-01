#include "phonebook.hpp"
#include "contact.hpp"


void	command_list()
{
	std::cout << std::setw(14) << std::left << "COMMAND" << std::setw(30) << std::left << "DESCRIPTION"
	<< "\n\n"
	<< std::setw(14) << std::left << "ADD" 
	<< std::setw(30) << std::left << "save a new contact" << "\n"
	<< std::setw(14) << std::left << "SEARCH" 
	<< std::setw(30) << std::left << "display a specific contact" << "\n"
	<< std::setw(14) << std::left << "EXIT" 
	<< std::setw(30) << std::left << "quit program" << "\n"
	<< "\nPlease enter a command:\n> ";
}

void	get_command(PhoneBook awsome_phonebook)
{
	std::string command;

	while (std::getline(std::cin, command))
	{
		if (command == "ADD" || command == "add")
			awsome_phonebook.addContact();
		else if (command == "SEARCH" || command == "search")
			awsome_phonebook.display_contacts();
		else if (command == "EXIT" || command == "exit")
			return ;
		else
		{
			std::cout << "\033[31m" <<"Not a valid Command!" << "\033[0m" << std::endl;
			continue ;
		}
		command_list();
	}
}




int main()
{

	PhoneBook	awsome_phonebook;
	std::string	title = "AWSOME PHONEBOOK";

	std::cout << std::endl << "\033[34m"
	<< std::setw(40) << std::setfill('*') << "" << std::setfill(' ') << std::endl
	<< std::setw((40 - title.length()) / 2) << "" << std::left << title << std::endl
	<< std::setw(40) << std::setfill('*') << "" << std::setfill(' ') << "\033[0m" << std::endl;
	command_list();
	get_command(awsome_phonebook);
	return (0);
}
