/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:32:25 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:34:02 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

class A :	public Base
{

public:

	A(void);
	A(A const & src);
	~A(void);

	A & operator=(A const & rhs);

protected:


private:


};

#endif /* A_H */
