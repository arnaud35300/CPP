/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:26:52 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 15:19:54 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Form::Form(void) : _name("Default form"), _is_signed(false), _grade_to_sign(1), _grade_to_execute(1)
{
	this->manageException(*this);
	return ;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name),
	_is_signed(false),
	_grade_to_sign(grade_to_sign),
	_grade_to_execute(grade_to_execute)
{
	this->manageException(*this);
	return ;
}

Form::Form(Form const & src) :	_name(src.getName()),
								_is_signed(src.getIsSigned()),
								_grade_to_sign(src.getGradeToSign()),
								_grade_to_execute(src.getGradeToExecute())
{
	*this = src;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &	Form::operator=(Form const & rhs)
{
	this->manageException(rhs);
	this->_is_signed = rhs._is_signed;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o	<< "[ "
		<< rhs.getName()
		<< " ] is_signed: "
		<< rhs.getIsSigned()
		<< " | sign grade: "
		<< rhs.getGradeToSign()
		<< " | execute grade : "
		<< rhs.getGradeToExecute()
		<< std::endl;
	return (o);
}

std::string const &	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getIsSigned(void) const
{
	return (this->_is_signed);
}

int	Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

void	Form::beSigned(Bureaucrat const & b)
{
	try
	{
		if (b.getGrade() > this->getGradeToSign())
			throw Form::GradeTooLowException();
		else
			this->_is_signed = true;
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cout << e.signGradeTooLow() << std::endl;
		this->_is_signed = false;
	}
}

bool	Form::manageException(Form const	& f)
{
	try
	{
		if (f.getGradeToExecute() > 150 || f.getGradeToSign() > 150)
			throw Form::GradeTooLowException();
		else if (f.getGradeToExecute() < 1 || f.getGradeToSign() < 1)
			throw Form::GradeTooHighException();
		return (true);
	}
	catch (Form::GradeTooLowException & e)
	{
		if (f.getGradeToExecute() > 150)
			std::cout << e.executeGradeTooLow() << std::endl;
		if (f.getGradeToSign() > 150)
			std::cout << e.signGradeTooLow() << std::endl;
		return (false);
	}
	catch (Form::GradeTooHighException & e)
	{
		if (f.getGradeToExecute() < 1)
			std::cout << e.executeGradeTooHigh() << std::endl;
		if (f.getGradeToSign() < 1)
			std::cout << e.signGradeTooHigh() << std::endl;
		return (false);
	}
}

void	Form::CheckExecuteRequirements(Bureaucrat const & executor) const
{
	if (!this->getIsSigned() || executor.getGrade() > this->getGradeToExecute())
		throw Form::ExecutionRequirementsException();
	return ;
}