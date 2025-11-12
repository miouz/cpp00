#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# define MAX_CONTACTS 8

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

#endif
