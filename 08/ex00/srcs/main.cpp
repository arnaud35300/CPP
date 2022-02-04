/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/04 15:55:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	// list
	{
		std::list<int>	l;
		int				i = 54;
	
		for (int i = 0; i < 40; ++i)
			l.push_back(i);
		std::list<int>::iterator it;
		std::list<int>::iterator ite = l.end();
		for (it = l.begin(); it != ite; ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
		if (easyfind(l, i) == l.end())
			std::cout << "List: " << i << " not found." << std::endl;
		else
			std::cout << "List: i" << i << " found." << std::endl;
	}
	// vector
	{
		std::vector<int>	v;
		int					i = 3;

		for (int i = 0; i < 40; ++i)
			v.push_back(i);
		std::vector<int>::iterator it;
		std::vector<int>::iterator ite = v.end();
		for (it = v.begin(); it != ite; ++it)
			std::cout << *it << " ";
		std::cout << std::endl;	
		if (easyfind(v, i) == v.end())
			std::cout << "Vector: " << i << " not found." << std::endl;
		else
			std::cout << "Vector: " << i << " found." << std::endl;
	}
	return (0);
}
