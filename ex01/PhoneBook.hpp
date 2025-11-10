#include "Contact.hpp"
#define MAX_CONTACTS 8

class	PhoneBook
{
	int		registered;
	Contact	contacts[MAX_CONTACTS];

	public:
		PhoneBook(): registered(0){};
	
		void	add(std::string& firstName, std::string& lastName, std::string& nickName,
		   			std::string& phoneNumber, std::string& darkestSecret);
		void	displayAllContacts();
		void	displayOneContact(int index);
};

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
	std::cout << std::setw(MAX_CHAR_PER_LINE) << "nickName" << std::endl;
	for (int index = 0; index < MAX_CONTACTS; index++)
	{
		std::cout << std::setw(MAX_CHAR_PER_LINE) << index << "|";
		contacts[index].displayContactOneLine();
	}
}

void	PhoneBook::displayOneContact(int index)
{
	if (index >= PhoneBook::registered)
		std::cerr << "index is empty or out of range \n";
	else
		contacts[index].displayContact();
}
