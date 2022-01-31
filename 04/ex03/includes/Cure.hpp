/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:44 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 13:54:17 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

class Cure : public AMateria {

public:

	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const & src );
	~Cure(void);

	Cure & operator=(Cure const & rhs );

	std::string const &	getType(void) const;
	void	use(ICharacter & target);	
	AMateria*	clone(void) const ;

protected:


private:


};

#endif /* CURE_H */
