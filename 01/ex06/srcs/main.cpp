/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:35:57 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 20:23:26 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	Karen	karen;
	std::string	level = av[1];

	karen.complain(level);
	return (0);
}
