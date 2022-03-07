/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:58:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/07 14:58:51 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

