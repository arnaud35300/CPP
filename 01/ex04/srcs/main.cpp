/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:29:45 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 18:32:13 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./prog filename s1 s2" << std::endl;
		return (1);
	}
	
	std::ifstream	ifs(av[1]);
	
	if (!ifs.is_open())
	{
		std::cout << "Bad file." << std::endl;
		return (2);
	}
	
	std::string	str(av[1]);
	str.append(".replace");
	std::ofstream	ofs(str.c_str());	
	if (!ofs.is_open())
	{
		std::cout << "New file creation failed." << std::endl;
		ifs.close();
		ofs.close();
		return (3);
	}
	
	std::string	content;

	// fill file content to a std::string variable.
	typedef std::istream_iterator<char> ch;
	for (ch it(ifs); it != ch(); ++it) {
		content.push_back(*it);
	}

	// erase and replace
	for (size_t i = 0; i < content.size(); i++)
	{
		if (content.compare(i, strlen(av[2]), av[2]) == 0)
		{
			content.erase(i, strlen(av[2]));
			content.insert(i, av[3]);
		}
	}
	ofs << content << std::endl;
	
	ifs.close();
	ofs.close();
	return (0);
}
