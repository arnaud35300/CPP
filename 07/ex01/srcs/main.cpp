/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/07 14:59:22 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	int	i[] = {1, 2, 3, 4, 5};
	char c[] = {'a', 'b', 'c'};
	std::string	s[] = {"bonjour", "salut", "yo", "coucou"};

	iter(i, 5, &print_current);
	iter(c, 3, &print_current);
	iter(s, sizeof(s)/sizeof(*s), &print_current);
	return (0);
}
