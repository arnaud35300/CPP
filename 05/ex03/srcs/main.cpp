/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/05 17:58:10 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	int exit_code = 0;
		Form *form;
		Form *invalid_form;
	try
	{
		Intern intern;

		form = intern.makeForm("shrubbery creation", "Shrubbery");
		std::cout << *form << std::endl;
		invalid_form = intern.makeForm("invalid", "invalid");

		if (form)
			delete form;
		if (invalid_form)
			delete invalid_form;
	}

	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		return (++exit_code);
	}
	return (exit_code);
}
