/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:14:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/05 12:33:23 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45), _target("")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src ) :
	Form("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}
	
RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm  const & rhs )
{
	(void)rhs;
	return (*this);
}

std::string const &	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int	is_pair = 0;
	this->CheckExecuteRequirements(executor);

	std::cout << "BzzzZZZzzzzzZZ BrrRRRrrrrrRrrRRrr" << std::endl;
	if (is_pair % 2)
		std::cout << this->getTarget() << " has been robotomised." << std::endl;
	else
		std::cout << this->getTarget() << " robotomy failed" << std::endl;
	++is_pair;
}