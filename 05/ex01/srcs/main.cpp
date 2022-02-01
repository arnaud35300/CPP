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
	Bureaucrat pnj("Marc", 1);
	Form		form("form", 12, 5);

	form.beSigned(pnj);
	pnj.signForm(form);

	std::cout << pnj << form;
	return (0);
}
