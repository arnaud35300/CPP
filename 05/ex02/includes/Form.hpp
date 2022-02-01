/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:26:52 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/01 22:11:22 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

class Form {

public:

	Form(void);
	Form(std::string name, int grade_to_sign, int grade_to_execute);
	Form(Form const & src);
	virtual ~Form(void);

	Form & operator=( Form  const & rhs );
	
	std::string const &	getName(void) const;
	bool	getIsSigned(void) const;
	int getGradeToSign(void) const;
	int	getGradeToExecute(void) const;
	void	beSigned(Bureaucrat const & b);
	bool	manageException(Form const	& f);

	class	GradeTooHighException :	public std::exception
	{
		public:
			virtual const char *	signGradeTooHigh(void) const throw()
			{
				return ("grade to sign is too high");
			}
			virtual const char *	executeGradeTooHigh(void) const throw()
			{
				return ("grade to execute is too high");
			}
	};
	class	GradeTooLowException :	public std::exception
	{
		public :
			virtual const char *	signGradeTooLow(void) const throw()
			{
				return ("grade to sign is too law");
			}
			virtual const char *	executeGradeTooLow(void) const throw()
			{
				return ("grade to execute is too law");
			}
	};

protected:

private:
	std::string const	_name;
	bool				_is_signed;
	int const			_grade_to_sign;
	int	const			_grade_to_execute;

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif /* FORM_H */
