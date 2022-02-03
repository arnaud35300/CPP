/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:14:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 22:20:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDONFORM_H
# define PRESIDENTPARDONFORM_H

class PresidentialPardonForm :	public Form
{

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm( PresidentialPardonForm const & src );

	~PresidentialPardonForm( void );

	PresidentialPardonForm & operator=( PresidentialPardonForm  const & rhs );

	std::string const &	getTarget(void) const;
	void	execute(Bureaucrat const & executor) const;

protected:


private:
	std::string const	_target;

};

#endif /* PresidentialPardonForm_H */
