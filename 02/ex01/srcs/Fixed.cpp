/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:25:17 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/27 12:01:40 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb) : _value(nb)
{
	std::cout << "Parameter constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const nb) : _value(nb)
{
	std::cout << "Parameter constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getValue();
	return (*this);
}

int	Fixed::getValue(void) const
{
	return (this->_value);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value);
}

int		Fixed::toInt(void) const
{
	return (this->_value);
}

std::ostream	&	Fixed::

int	Fixed::_bytes = 8;
