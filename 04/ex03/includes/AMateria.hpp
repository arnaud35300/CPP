/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 13:50:37 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"

class	ICharacter;

class AMateria {

public:

	AMateria(void);
	AMateria(std::string const & type );
	AMateria(AMateria const & src);
	virtual ~AMateria(void);
	std::string const &	getType(void) const;
	virtual AMateria*	clone(void) const = 0;
	virtual void	use(ICharacter & target);

	AMateria & operator=( AMateria  const & rhs );

protected:
	std::string	_type;

private:


};

#endif /* AMATERIA_H */
