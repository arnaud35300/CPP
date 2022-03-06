/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/06 16:32:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int ac , char **av)
{
	if (ac != 2)
	{
		std::cout << ":(" << std::endl;
		return (1);
	}
	std::string	input = av[1];
	App	app(input);
	try
	{
		app.findType();
		app.printType();
	}
	catch (App::BadInputException & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}