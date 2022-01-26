/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:29:32 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 16:03:17 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	int	N = 5;
	Zombie *zombie = zombieHorde(N, "Georges");

	std::cout << "[Call] : announce()" << std::endl;
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	std::cout << "[Call] : Delete" << std::endl;
	delete [] zombie;
	return (0);
}
