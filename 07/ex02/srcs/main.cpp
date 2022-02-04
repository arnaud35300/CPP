/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/04 12:02:06 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

template<typename T>
std::string	toString(T const & value)
{
	std::ostringstream	oss;
	oss << value;
	return (oss.str());
}

int	main(void)
{
	Array<int>	a;
	Array<std::string>	b(5);

	for (int i = 0; i < 5; ++i)
		b[i] = "string " + ::toString(i);
	try
	{
		std::cout << a[56] << std::endl;
	}
	catch (std::out_of_range & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << b[2] << std::endl;
	}
	catch (std::out_of_range & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
