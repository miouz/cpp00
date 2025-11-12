#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void)
{
	for (int n = 0; n < 5; n++)
		infos[n] = "";
}

void	Contact::setContact(std::string& firstName, std::string& lastName,
			std::string& nickName, std::string& phoneNumber, std::string& darkestSecret)
{
	infos[0] = firstName;
	infos[1] = lastName;
	infos[2] = nickName;
	infos[3] = phoneNumber;
	infos[4] = darkestSecret;
}

void	Contact::displayContact(void)
{
	std::cout << "firstName: " << infos[0] <<std::endl;
	std::cout << "lastName " << infos[1] <<std::endl;
	std::cout << "nickName : " << infos[2] <<std::endl;
	std::cout << "phoneNumber : " << infos[3] <<std::endl;
	std::cout << "darkestSecret : " << infos[4] <<std::endl;
}

void	Contact::displayContactOneLine()
{
	for (int index = 0; index < 3; index++)
	{
		if (infos[index].length() >= 9)
			std::cout << std::setw(MAX_CHAR_PER_LINE) << infos[index].substr(0, 9) + ".";
		else
			std::cout << std::setw(MAX_CHAR_PER_LINE) << infos[index];
		std::cout << "|";
	}
	std::cout << std::endl;
}
