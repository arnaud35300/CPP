/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 22:26:19 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Dog::Dog(void) : _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Call Dog default constructor" << std::endl;
	return ;
}

Dog::Dog( Dog const & src ) : _brain(new Brain())
{
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Call Dog default destructor" << std::endl;
	delete this->_brain;
	return ;
}

Dog & Dog::operator=( Dog  const & rhs )
{
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
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

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}