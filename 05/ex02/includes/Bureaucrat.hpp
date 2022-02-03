/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:03:37 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 12:03:55 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

class	Form;

class Bureaucrat {

public:

	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat(std::string const & name, int grade);
	~Bureaucrat(void);

	Bureaucrat & operator=( Bureaucrat  const & rhs );

	std::string const &	getName(void) const;
	int	getGrade(void) const;
	void	increaseGrade(void);	
	void	decreaseGrade(void);	
	void	checkGrade(int const grade);
	void	signForm(Form const & form);
	void	executeForm(Form const & form);

	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char *	what(void) const throw()
			{
				return ("Grade too high.");
			}
	};
	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char *	what(void) const throw()
			{
				return ("Grade too low.");
			}
	};
protected:


private:
	std::string const	_name;
	int	_grade;

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif /* BUREAUCRAT_H */
