/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:     */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 22:14:40 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 22:20:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm :	public Form
{

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);

	~RobotomyRequestForm( void );

	RobotomyRequestForm & operator=(RobotomyRequestForm  const & rhs);

	std::string const &	getTarget(void) const;
	void	execute(Bureaucrat const & executor) const;

protected:


private:
	std::string const	_target;
};

#endif /* RobotomyRequestForm_H */
