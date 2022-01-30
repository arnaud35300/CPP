/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:28:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 00:14:48 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

class Animal {

public:

	Animal( void );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal & operator=( Animal  const & rhs );
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;

protected:
	std::string	_type;	

private:
	
};

#endif /* ANIMAL_H */
