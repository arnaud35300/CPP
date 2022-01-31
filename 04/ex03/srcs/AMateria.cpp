/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 13:34:30 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AMateria::AMateria(void):  _type("None")
{
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

std::string const &	AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	(void)target;
}
