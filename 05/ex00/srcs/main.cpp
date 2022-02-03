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
	{
		Bureaucrat	b = Bureaucrat("B", 1);
		std::cout << b;
		b.increaseGrade();
		std::cout << b;
	}
	{
		Bureaucrat	b = Bureaucrat("B", 150);
		std::cout << b;
		b.decreaseGrade();
		std::cout << b;
	}
	return (0);
}