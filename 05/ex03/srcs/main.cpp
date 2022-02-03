/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 12:27:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	Intern	intern;
	Form *	form;
	Form *	invalid_form;

	form = intern.makeForm("shrubbery creation", "Shrubbery");
	invalid_form = intern.makeForm("invalid", "invalid");

	if (form)
		delete form;
	if (invalid_form)
		delete invalid_form;
	return (0);
}
