/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:56:51 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/07 14:57:02 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
T &	min(T & a, T & b)
{
	if (b <= a)
		return (b);
	return (a);
}
