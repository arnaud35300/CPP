/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:14:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 22:30:51 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5), _target("")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src ) :
	Form("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}
	
PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm  const & rhs )
{
	(void)rhs;
	return (*this);
}

std::string const &	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->CheckExecuteRequirements(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return ;
}