/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 15:38:42 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	ScavTrap	s("Jean-scavtrap");

	std::cout << s;
	s.attack("Ennemy");
	s.takeDamage(2);
	std::cout << s;
	s.beRepaired(1);
	std::cout << s;
	s.takeDamage(20);
	std::cout << s;
	s.beRepaired(50);
	s.attack("Ennemy");

	s.guardGate();
	return (0);
}
