/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:32:25 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:35:27 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

class B :	public Base
{

public:

	B(void);
	B(B const & src);
	~B(void);

	B & operator=(B const & rhs);

protected:


private:


};

#endif /* B_H */
