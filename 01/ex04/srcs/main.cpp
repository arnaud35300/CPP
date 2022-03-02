/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:29:45 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/02 18:10:56 by arguilla         ###   ########.fr       */
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
	std::string line;
	while (std::getline(ifs, line))
	{
		size_t i = 0;
		while (i < line.size())
		{
			if (line.compare(i, strlen(av[2]), av[2]) == 0)
			{
				line.erase(i, strlen(av[2]));
				line.insert(i, av[3]);
				i += strlen(av[3]);
			}
			else
				i++;
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
