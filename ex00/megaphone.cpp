#include <iostream>
#include <string>
#include <cctype>

void	print_toupperstr(std::string str)
{
	std::string::iterator	it;

	for (it = str.begin(); it != str.end(); it++)
	{
		*it = std::toupper(*it);
		std::cout << *it;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv++ && *argv)
			print_toupperstr(*argv);
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}
