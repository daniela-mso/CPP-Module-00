#ifndef PHONEBOOK_HPP
#define PHONEBOOk_HPP
 
#include "contact.hpp"


class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_index;
		bool	_has_contacts;
		bool	_is_full;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	searchContact(void);
		void	setIndex(void);

		void	display_contacts(void);


};

std::string	get_data(std::string atribute);
std::string	format_column(const std::string &str);

#endif