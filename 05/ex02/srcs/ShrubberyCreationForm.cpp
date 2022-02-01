/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:14:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 22:30:51 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
{
	return ;
}

ShrubberyCreationForm( ShrubberyCreationForm const & src ) : _name(src.getName())
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}
	
ShrubberyCreationForm & operator=( ShrubberyCreationForm  const & rhs )
{
	this->_is_signed = rhs.getIsSigned();
	return (*this);
}
