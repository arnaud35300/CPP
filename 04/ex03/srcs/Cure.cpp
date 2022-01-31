/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:44 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 14:23:40 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	return ;
}

Cure::Cure(std::string const & type)
{
	this->_type = type;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::string const &	Cure::getType(void) const
{
	return (this->_type);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << " *" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure);
}
