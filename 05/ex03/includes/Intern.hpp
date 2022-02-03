/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:01:59 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 12:08:09 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

class Intern {

public:

	Intern(void);
	Intern(Intern const & src);
	~Intern( void );

	Intern & operator=(Intern const & rhs);
	
	Form *	makeForm(std::string name, std::string target);

protected:


private:


};

#endif /* INTERN_H */
