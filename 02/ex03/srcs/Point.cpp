/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:46:57 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/06 12:42:03 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
	return ;
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point(Point const & src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point &	Point::operator=(Point const & rhs)
{
	(void)rhs;
	return (*this);
}

Fixed const &	Point::getX(void) const
{
	return (this->_x);
}

Fixed const &	Point::getY(void) const
{
	return (this->_y);
}

