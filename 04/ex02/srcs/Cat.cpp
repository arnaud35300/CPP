/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 22:26:15 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(void) : _brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Call Cat default constructor" << std::endl;
	return ;
}

Cat::Cat( Cat const & src ): _brain(new Brain())
{
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Call Cat default destructor" << std::endl;
	delete this->_brain;
	return ;
}

Cat & Cat::operator=( Cat  const & rhs )
{
	delete this->_brain;
	this->_brain = new Brain(*(rhs.getBrain()));
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat default sound" << std::endl;
	return ;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}