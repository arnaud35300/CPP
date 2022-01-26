/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:29:32 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 15:41:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Zombie *zombie;

	zombie = newZombie("Georges");

	std::clog << "[Call] : announce()" << std::endl;
	zombie->announce();

	std::cout << "[Call] : Delete" << std::endl;
	delete zombie;
	
	std::cout << "[Call] : randomChump()" << std::endl;
	randomChump("Joe");
}
