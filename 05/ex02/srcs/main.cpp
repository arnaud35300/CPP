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
	ShrubberyCreationForm	s_form("tree");
	RobotomyRequestForm		r_form("robot");
	PresidentialPardonForm	p_form("presidential");
	Bureaucrat				bureaucrat("Steve", 1);

	std::cout
		<< s_form
		<< r_form
		<< p_form
		<< std::endl << "Bureaucrat :" << std::endl
		<< bureaucrat
	;

	bureaucrat.executeForm(s_form);
	s_form.beSigned(bureaucrat);
	bureaucrat.signForm(s_form);
	bureaucrat.executeForm(s_form);

	bureaucrat.executeForm(p_form);
	r_form.beSigned(bureaucrat);
	bureaucrat.signForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);
	bureaucrat.executeForm(r_form);

	bureaucrat.executeForm(p_form);
	p_form.beSigned(bureaucrat);
	bureaucrat.signForm(p_form);
	bureaucrat.executeForm(p_form);

	std::cout
		<< s_form
		<< r_form
		<< p_form
		<< std::endl << "Bureaucrat :" << std::endl
		<< bureaucrat
	;

	return (0);
}
