/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 20:46:12 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Call Dog default constructor" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Call Dog default destructor" << std::endl;
	return ;
}

Dog & Dog::operator=( Dog  const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog default sound" << std::endl;
	return ;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

