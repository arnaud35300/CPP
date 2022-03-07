/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:00:02 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/07 15:00:21 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
std::string	toString(T const & value)
{
	std::ostringstream	oss;
	oss << value;
	return (oss.str());
}

