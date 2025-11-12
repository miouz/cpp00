#include "PhoneBook.hpp"
#include <iostream>

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
	if (!firstName.empty() && !lastName.empty() && !nickName.empty()
			&& !phoneNumber.empty() && !darkestSecret.empty())
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
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		else
		{
			std::cerr << "getline error\n";
			return ;
		}
	}
	try
	{
		index = std::stoi(input, nullptr, 10);
	}
	catch (...)
	{
		std::cerr << "error while converting string to integer\n";
		return ;
	}
	book.displayOneContact(index);
}

int	main(void)
{
	PhoneBook book;

	while (1)
	{
		std::string	input;

		std::cout << "please ADD, SEARCH, or EXIT" << std::endl;
		if (!std::getline(std::cin, input))
		{
			if (std::cin.eof())
				break ;
			else
			{
				std::cerr << "getline error\n";
				break ;
			}
		}
		if (input == "ADD")
			addContact(book);
		else if (input == "SEARCH")
			searchInBook(book);
		else if (input == "EXIT")
			break ;
	}
	return (EXIT_SUCCESS);
}
