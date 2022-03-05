/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/04 16:26:51 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{	
	Cat	one;
	one.getBrain()->ideas[0] = "BONJOUR";
	Cat	two = one;
	one.getBrain()->ideas[0] = "SALUT";	
	std::cout << one.getBrain()->ideas[0] << std::endl;
	std::cout << two.getBrain()->ideas[0] << std::endl;
	Dog	three;
	three.getBrain()->ideas[0] = "BONJOUR";
	Dog	four = three;
	three.getBrain()->ideas[0] = "SALUT";	
	std::cout << three.getBrain()->ideas[0] << std::endl;
	std::cout << four.getBrain()->ideas[0] << std::endl;
	Animal	*animals[10];
	for (int i = 0; i < 10; ++i) {
		if (i % 2) 
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; ++i)
		delete animals[i];
	return (0);
}
