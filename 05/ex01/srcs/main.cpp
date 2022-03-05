/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/05 12:23:16 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	int	exit_code = 0;
	try
	{
		Bureaucrat	b = Bureaucrat("B", 10);
		std::cout << b;

		Form		form("form", 10, 5);
		std::cout << form << std::endl;

		form.beSigned(b);
		b.signForm(form);
	}
	catch(const  Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << '\n';
		return (++exit_code);
	}
	catch(const  Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << '\n';
		return (++exit_code);
	}
	catch (const Form::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
		return (++exit_code);
	}
	catch (const Form::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
		return (++exit_code);
	}
	catch(const  std::exception & e)
	{
		std::cerr << e.what() << '\n';
		return (++exit_code);
	}
	std::cout << "OK" << std::endl;		
	return (0);
}
