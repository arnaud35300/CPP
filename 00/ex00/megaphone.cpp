/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:26:00 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/24 18:04:25 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		int	len = strlen(av[i]);
		for (int j = 0; j < len; j++)
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				av[i][j] = av[i][j] - 32;
		}
		std::cout << av[i];
	}
	std::cout << std::endl;
	return (0);
}
