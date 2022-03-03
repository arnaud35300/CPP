/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/03 17:00:59 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	ClapTrap	claptrap("Jean");

	std::cout << claptrap;
	claptrap.attack("Ennemy");

	claptrap.takeDamage(2);
	std::cout << claptrap;
	claptrap.beRepaired(1);
	std::cout << claptrap;
	
	claptrap.takeDamage(20);
	std::cout << claptrap;

	claptrap.beRepaired(50);
	claptrap.attack("Ennemy");
	return (0);
}
