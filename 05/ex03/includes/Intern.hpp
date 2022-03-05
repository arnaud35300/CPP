/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:01:59 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/05 13:23:16 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

class Intern
{

public:
	Intern(void);
	Intern(Intern const &src);
	~Intern(void);

	Intern &operator=(Intern const &rhs);

	Form *makeForm(std::string name, std::string target);

	class NoMatchFormException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Invalid form name");
			}
	};

protected:
private:
};

#endif /* INTERN_H */
