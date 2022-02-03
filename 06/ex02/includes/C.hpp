/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:32:25 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:36:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H

class C :	public Base
{

public:

	C(void);
	C(C const & src);
	~C(void);

	C & operator=(C const & rhs);

protected:


private:


};

#endif /* C_H */
