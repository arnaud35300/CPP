/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:14:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 22:20:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

class ShrubberyCreationForm :	public Form
{

public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm( ShrubberyCreationForm const & src );

	~ShrubberyCreationForm( void );

	ShrubberyCreationForm & operator=( ShrubberyCreationForm  const & rhs );

	std::string const &	getTarget(void) const;
	void	execute(Bureaucrat const & executor) const;
protected:


private:
	std::string const	_target;

};

#endif /* SHRUBBERYCREATIONFORM_H */
