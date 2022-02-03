/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:32:25 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:35:54 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

B::B(void)
{
	return ;
}

B::B(B const & src)
{
	*this = src;
	return ;
}

B::~B(void)
{
	return ;
}

B &	B::operator=(B const & rhs)
{
	(void)rhs;
	return (*this);
}
