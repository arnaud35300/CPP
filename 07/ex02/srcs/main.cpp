/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/07 15:00:17 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.hpp"

int	main(void)
{
	Array<int>	a;
	Array<std::string>	b(5);

	for (int i = 0; i < 5; ++i)
		b[i] = "string " + ::toString(i);
	try
	{
		std::cout << a[2]  << std::endl;
	}
	catch (std::out_of_range & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		for (int i = 0; i < 5; ++i)
			std::cout << b[i] << std::endl;
	}
	catch (std::out_of_range & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
