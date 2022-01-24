#include "main.hpp"

int	main(void)
{
	std::string		cmd;
	Phonebook	phonebook;
		
	while (phonebook.get_cmd() != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> cmd;
		phonebook.set_cmd(cmd);
		phonebook.execute_cmd();
	}
		phonebook.print_contacts();
}
