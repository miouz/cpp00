#ifndef CONTACT_HPP
# define CONTACT_HPP
# define MAX_CHAR_PER_LINE 10

# include <string>

// std::string[0]	firstName;
// std::string[1]	lastName;
// std::string[2]	nickName;
// std::string[3]	phoneNumber;
// std::string[4]	darkestSecret;
class	Contact
{
	std::string	infos[5];

	public:
		Contact();

		void	setContact(std::string& firstName, std::string& lastName,
				  std::string& nickName, std::string& phoneNumber, std::string& darkestSecret);
		void	displayContact();
		void	displayContactOneLine();
};

#endif // !CONTACT_HPP
