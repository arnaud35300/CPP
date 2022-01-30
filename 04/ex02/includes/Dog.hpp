/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 22:21:54 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

class Dog : public Animal
{

public:

	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );

	Dog & operator=( Dog const & rhs );
	Animal & operator=( Animal  const & rhs );
	virtual void	makeSound(void) const;
	std::string	getType(void) const;
	Brain	*getBrain(void) const;

protected:

private:
	Brain	*_brain;
};

#endif /* DOG_H */
