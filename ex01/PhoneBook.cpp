#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void	PhoneBook::add(std::string& firstName, std::string& lastName, std::string& nickName,
			std::string& phoneNumber, std::string& darkestSecret)
{
	contacts[registered].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	if (registered <= 6)
		registered++;
}

void	PhoneBook::displayAllContacts()
{
	
	std::cout << std::setw(MAX_CHAR_PER_LINE) << "index" << "|";
	std::cout << std::setw(MAX_CHAR_PER_LINE) << "firstName" << "|";
	std::cout << std::setw(MAX_CHAR_PER_LINE) << "lastName" << "|";
	std::cout << std::setw(MAX_CHAR_PER_LINE) << "nickName" << "|" << std::endl;
	for (int index = 0; index < MAX_CONTACTS; index++)
	{
		std::cout << std::setw(MAX_CHAR_PER_LINE) << index << "|";
		contacts[index].displayContactOneLine();
	}
}

void	PhoneBook::displayOneContact(int index)
{
	if (index >= MAX_CONTACTS)
	{
		std::cerr << "index is out of range\n";
		return ;
	}
	if (index >= PhoneBook::registered)
	{
		std::cerr << "index's content is empty\n";
		return ;
	}
	if (index < 0)
	{
		std::cerr << "are you serious about using negative index ?\n";
		return ;
	}
	else
		contacts[index].displayContact();
}
