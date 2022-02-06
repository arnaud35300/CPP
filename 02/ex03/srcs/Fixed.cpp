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
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb)
{
	//std::cout << "Integer constructor called" << std::endl;
	this->_value = nb << Fixed::_bytes;
	return ;
}

Fixed::Fixed(float const nb) : _value(nb)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nb * (pow(2, Fixed::_bytes)));
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	//std::cout << "Call + operator" << std::endl;
	return (Fixed(this->_value + rhs.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	//std::cout << "Call * operator" << std::endl;
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	//std::cout << "Call / operator" << std::endl;
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator>(const Fixed & rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed & rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed & rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed & rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed & rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed & rhs) const
{
	return (!(*this == rhs));
}

/*
** Pre increment
*/
Fixed	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

/*
** Post increment
*/
Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++(*this);
	return (tmp);
}

/*
** Pre decrement
*/
Fixed	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

/*
** Post decrement
*/
Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--(*this);
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	//std::cout << "Call - operator" << std::endl;
	return (Fixed(this->_value - rhs.getRawBits()));
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (pow(2, Fixed::_bytes)));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bytes);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

const Fixed &	Fixed::min(const Fixed & rls, const Fixed & rhs)
{
	if (rls < rhs)
		return (rls);
	else
		return (rhs);
}

Fixed &	Fixed::min(Fixed & rls, Fixed & rhs)
{
	if (rls < rhs)
		return (rls);
	else
		return (rhs);
}

Fixed &	Fixed::max(Fixed & rls, Fixed & rhs)
{
	if (rls > rhs)
		return (rls);
	else
		return (rhs);
}

const Fixed &	Fixed::max(const Fixed & rls, const Fixed & rhs)
{
	if (rls > rhs)
		return (rls);
	else
		return (rhs);
}

int	Fixed::_bytes = 8;
