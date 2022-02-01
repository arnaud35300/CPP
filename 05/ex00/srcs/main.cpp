/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 12:07:49 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Bureaucrat	b = Bureaucrat("B", 12);
	Bureaucrat	b1 = Bureaucrat("B1", -1);
	Bureaucrat	b2 = Bureaucrat("B2", 151);
	Bureaucrat	b3 = Bureaucrat("B3", 150);
	Bureaucrat	b4 = Bureaucrat("B4", 1);

	b3.increaseGrade();
	b4.decreaseGrade();

	std::cout << b;
	std::cout << b1;
	std::cout << b2;
	std::cout << b3;
	std::cout << b4;

	return (0);
}
