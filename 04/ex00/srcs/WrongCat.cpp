/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 20:55:23 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "Call WrongCat default constructor" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Call WrongCat default destructor" << std::endl;
	return ;
}

WrongCat & WrongCat::operator=( WrongCat  const & rhs )
{
	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat default sound" << std::endl;
	return ;
}

std::string	WrongCat::getType(void) const
{
	return (this->_type);
}

