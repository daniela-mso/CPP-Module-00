#include "contact.hpp"


Contact::Contact(){}

Contact::~Contact(){}


void	Contact::setFirstName(std::string str)
{
	this->_firstName = str;
}

void	Contact::setLastName(std::string str)
{
	this->_lastName = str;
}

void	Contact::setNickName(std::string str)
{
	this->_nickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->_darkestSecret = str;
}

//getters

std::string Contact::getFirstName(void)const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void)const
{
	return (this->_lastName);
}

std::string Contact::getNickName(void)const
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber(void)const
{
	return (this-> _phoneNumber);
}

std::string Contact::getDarkestSecret(void)const
{
	return (this->_darkestSecret);
}