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
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src ) :
	Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}
	
ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm  const & rhs )
{
	(void)rhs;
	return (*this);
}

std::string const &	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->CheckExecuteRequirements(executor);
	std::string		filename = this->_target + "_shrubbrey";
	std::ofstream	ofs(filename.c_str());

	ofs << "	                                                	 ." << std::endl
		<< "                                              .         ;  " << std::endl
		<< "                 .              .              ;%     ;;   " << std::endl
		<< "                   ,           ,                :;%  %;   " << std::endl
		<< "                    :         ;                   :;%;'     .,   " << std::endl
		<< "           ,.        %;     %;            ;        %;'    ,;" << std::endl
		<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
		<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl
		<< "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
		<< "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
		<< "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
		<< "                    `:%;.  :;bd%;          %;@%;'" << std::endl
		<< "                      `@%:.  :;%.         ;@@%;'   " << std::endl
		<< "                        `@%.  `;@%.      ;@@%;         " << std::endl
		<< "                          `@%%. `@%%    ;@@%;        " << std::endl
		<< "                            ;@%. :@%%  %@@%;       " << std::endl
		<< "                              %@bd%%%bd%%:;     " << std::endl
		<< "                                #@%%%%%:;;" << std::endl
		<< "                                %@@%%%::;" << std::endl
		<< "                                %@@@%(o);  . '         " << std::endl
		<< "                                %@@@o%;:(.,'         " << std::endl
		<< "                            `.. %@@@o%::;         " << std::endl
		<< "                               `)@@@o%::;         " << std::endl
		<< "                                %@@(o)::;        " << std::endl
		<< "                               .%@@@@%::;         " << std::endl
		<< "                               ;%@@@@%::;.          " << std::endl
		<< "                              ;%@@@@%%:;;;. " << std::endl
		<< "                          ...;%@@@@@%%:;;;;,.. " << std::endl;
	ofs.close();
}
