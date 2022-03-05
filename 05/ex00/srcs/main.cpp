/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/05 12:00:51 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat	b = Bureaucrat("B", 151);
			std::cout << b;
			b.decreaseGrade();
			std::cout << b;
		}
		catch(const  Bureaucrat::GradeTooHighException & e)
		{
			std::cerr << e.what() << '\n';
			return (1);
		}
		catch(const  Bureaucrat::GradeTooLowException & e)
		{
			std::cerr << e.what() << '\n';
			return (2);
		}
		catch(const  std::exception & e)
		{
			std::cerr << e.what() << '\n';
			return (3);
		}		
	}
	return (0);
}
