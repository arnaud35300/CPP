/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 16:12:30 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
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
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		FragTrap	f("Jean-fragtrap");
	
		std::cout << f;
		f.attack("Ennemy");
		f.takeDamage(2);
		std::cout << f;
		f.beRepaired(1);
		std::cout << f;
		f.takeDamage(20);
		std::cout << f;
		f.beRepaired(50);
		f.attack("Ennemy");
	
		f.highFivesGuys();
	}
	return (0);
}
