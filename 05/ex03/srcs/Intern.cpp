/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:01:59 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 12:27:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern &	Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return (*this);
}

Form *	Intern::makeForm(std::string name, std::string target)
{
	Form	*result = NULL;
	
	Form	*forms[] =
	{
		new ShrubberyCreationForm(target),
		new	RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	std::string	names[] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential form", 
	};

	for (unsigned long i = 0; i < sizeof(names)/sizeof(*names); ++i)
	{
		if (name.compare(names[i]) == 0)
			result = forms[i];
		else
			delete forms[i];
	}

	if (result)
		std::cout << "Intern create " << name << std::endl;
	else
		std::cout << "Invalid form name" << std::endl;

	return (result);
}
