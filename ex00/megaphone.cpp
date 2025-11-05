#include <iostream>
#include <string>
#include <cctype>

int	main(void)
{
	std::string				line;
	std::string::iterator	it;

	std::getline(std::cin, line);
	if (line.empty() == true)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (it = line.begin(); it != line.end(); it++)
		{
			if (std::islower(*it) == true)
				*it = std::toupper(*it);
			std::cout << *it;
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
