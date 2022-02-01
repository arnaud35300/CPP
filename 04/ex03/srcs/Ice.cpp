/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:44 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 14:21:14 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	return ;
}

Ice::Ice(std::string const & type)
{
	this->_type = type;
	return ;
}

Ice::Ice(const Ice & src)
{
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &	Ice::operator=(Ice const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::string const &	Ice::getType(void) const
{
	return (this->_type);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}
