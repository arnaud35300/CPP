/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:38:28 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/04 15:37:20 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_H
# define EASYFIND_H

template<typename T>
typename T::iterator	easyfind(T & container, int value)
{
	typename T::iterator	it = find(container.begin(), container.end(), value);
	
	if (it == container.end())
		return (container.end());
	return (it);
}

# endif
