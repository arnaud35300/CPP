#include "main.hpp"

int	main(void)
{
	std::string		cmd;
	Phonebook	phonebook;
	
	std::cout << "Welcome to my interactive phonebook !" << std::endl;
	while (cmd.compare("EXIT") != 0)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			Contact contact;
			contact.add();
			phonebook.add_contact(contact);
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			phonebook.print_contacts();
			phonebook.search_contact();
		}
	}
}
