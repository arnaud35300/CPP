/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 20:43:27 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Call Cat default constructor" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Call Cat default destructor" << std::endl;
	return ;
}

Cat & Cat::operator=( Cat  const & rhs )
{
	this->_type = rhs.getType();
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

