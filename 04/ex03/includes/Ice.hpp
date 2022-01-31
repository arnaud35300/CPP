/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:44 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 13:51:59 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

class Ice : public AMateria {

public:

	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const & src );
	~Ice(void);

	Ice & operator=(Ice const & rhs );

	std::string const &	getType(void) const;
	void	use(ICharacter & target);	
	AMateria*	clone(void) const ;


protected:


private:


};

#endif /* ICE_H */
