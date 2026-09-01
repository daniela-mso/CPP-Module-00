#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_has_contacts = false;
	this->_is_full = false;
	
}


PhoneBook::~PhoneBook(){}

void PhoneBook::setIndex()
{
	this->_has_contacts = true;
	this->_index++;
	if (_index >= 8)
	{
		this->_index = 0;
		this->_is_full = true;
	}
}

std::string	get_data(std::string atribute)
{
	std::string	input;

	while (input.empty())
	{
		std::cout << "Enter " << atribute << ":" << std::endl;
		std::getline(std::cin, input);
		if (!input.empty())
			break;
	}
	return (input);
}

void PhoneBook::addContact(void)
{
	this->_contacts[this->_index].setFirstName(get_data("First Name"));

	this->_contacts[this->_index].setLastName(get_data("Last Name"));

	this->_contacts[this->_index].setNickName(get_data("Nickname"));

	this->_contacts[this->_index].setPhoneNumber(get_data("Phone Number"));

	this->_contacts[this->_index].setDarkestSecret(get_data("Darkest Secret"));


	setIndex();

}

std::string	format_column(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9).append("."));
	else
		return (str);
}


void PhoneBook::display_contacts()
{
	int	i;

	i = 0;
	if (this->_has_contacts == false)
	{
		std::cout << "\033[31m" << "No contacts registred!" << "\033[0m" << std::endl << std::endl;
		return;
	}

	// info header
	std::cout << "\033[34m"; // Blue

	// Top border
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;

	std::cout << std::setfill(' ');

	// Header
	std::cout << "|"
			<< std::setw(8)  << "Index"
			<< "|"
			<< std::setw(11) << "First name"
			<< "|"
			<< std::setw(11) << "Last name"
			<< "|"
			<< std::setw(10) << "Nickname"
			<< "|"
			<< std::endl;

	// Bottom border
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;

	std::cout << std::setfill(' ');

    std::cout << "\033[0m"; // Reset color



	int	full;
	if (this->_is_full)
		full = 8;
	else
		full = this->_index;
	while (++i <= full)
	{
		std::cout << std::setw(10) << std::right << i << '|'
		<< std::setw(10) << format_column(this->_contacts[i - 1].getFirstName()) << '|'
		<< std::setw(10) << format_column(this->_contacts[i - 1].getLastName()) << '|'
		<< std::setw(10) << format_column(this->_contacts[i - 1].getNickName()) << '|' << std::endl;

	}
	this->searchContact();

}


void PhoneBook::searchContact(void)
{
	std::string input;

	std::cout << "Enter Contact Index:" << std::endl;

	while(1)
	{
		std::getline(std::cin, input);
		if ((this->_has_contacts == true) && (input.length() == 1) && (input[0] >= '1' && input[0] <= '8'))
		{
			int	index = input[0] - 49;
			std::cout   << "\033[34m" << std::left << std::setw(16) << "First Name:"
						<< "\033[0m" << this->_contacts[index].getFirstName() << std::endl

						<< "\033[34m" << std::left << std::setw(16) << "Last Name:"
						<< "\033[0m" << this->_contacts[index].getLastName() << std::endl

						<< "\033[34m" << std::left << std::setw(16) << "Nickname:"
						<< "\033[0m" << this->_contacts[index].getNickName() << std::endl

						<< "\033[34m" << std::left << std::setw(16) << "Phone Number:"
						<< "\033[0m" << this->_contacts[index].getPhoneNumber() << std::endl

						<< "\033[34m" << std::left << std::setw(16) << "Darkest Secret:"
						<< "\033[0m" << this->_contacts[index].getDarkestSecret() << std::endl;

			std::cout << std::endl;


			return;
		}
		std::cout << "\033[31m" <<"Invalid Index" << "\033[0m" << std::endl;
	}

}
