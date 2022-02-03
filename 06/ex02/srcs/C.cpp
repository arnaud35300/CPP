/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:32:25 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:36:15 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

C::C(void)
{
	return ;
}

C::C(C const & src)
{
	*this = src;
	return ;
}

C::~C(void)
{
	return ;
}

C &	C::operator=(C const & rhs)
{
	(void)rhs;
	return (*this);
}
