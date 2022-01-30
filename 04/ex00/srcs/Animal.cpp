/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:28:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 20:56:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknown type")
{
	std::cout << "Call WrongAnimal default constructor" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Call WrongAnimal default destructor" << std::endl;
	return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal  const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal default sound" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
