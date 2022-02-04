/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/04 10:53:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

template<typename T>
void	iter(T * array, int length, void (*func)(const T &))
{
	for (int i = 0; i < length; ++i)
		func(array[i]);
	return ;
}

template<typename T>
void	print_current(T & item)
{
	std::cout << "item : " << item << std::endl;
}

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
