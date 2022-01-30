/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:28:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 22:22:23 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Animal::Animal(void) : _type("Unknown type")
{
	std::cout << "Call Animal default constructor" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Call Animal default destructor" << std::endl;
	return ;
}

Animal & Animal::operator=( Animal  const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
