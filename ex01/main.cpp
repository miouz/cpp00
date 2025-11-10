#include "PhoneBook.hpp"

void	addContact(PhoneBook& book)
{
	std::string	firstName, lastName, nickName, phoneNumber, darkestSecret;

	std::cout << "please enter the first name:\n";
	std::getline(std::cin, firstName);
	std::cout << "please enter the last name:\n";
	std::getline(std::cin, lastName);
	std::cout << "please enter the nick name:\n";
	std::getline(std::cin, nickName);
	std::cout << "please enter the phone number:\n";
	std::getline(std::cin, phoneNumber);
	std::cout << "please enter the darkest secret:\n";
	std::getline(std::cin, darkestSecret);
	if (firstName.empty() && lastName.empty() && nickName.empty()
			&& phoneNumber.empty() && darkestSecret.empty())
		book.add(firstName, lastName, nickName, phoneNumber, darkestSecret);
	else
		std::cerr << "empty input is not accepted, please enter ADD again, otherwise you could rage quit\n";
}

void	searchInBook(PhoneBook& book)
{
	std::string input;
	int index;

	book.displayAllContacts();
	std::cout << "enter the index to stalk more this person\n";
	std::getline(std::cin, input);
	try
	{
		index = std::stoi(input, nullptr, 10);
	}
	catch (...)
	{
		std::cerr << "error while converting string to integer\n";
	}
	if (index < MAX_CONTACTS)
		book.displayOneContact(index);
	else
		std::cerr << "index is out of range\n";
}

int	main(void)
{
	PhoneBook book;

	
	book.displayAllContacts();
	while (1)
	{
		std::string	input;

		std::getline(std::cin, input);
		if (input == "ADD")
			addContact(book);
		else if (input == "SEARCH")
			searchInBook(book);
		else if (input == "EXIT")
			break ;
		else
			std::cout << "please ADD, SEARCH, or EXIT" << std::endl;
	}
	return (EXIT_SUCCESS);
}
