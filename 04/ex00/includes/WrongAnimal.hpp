/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:28:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 21:00:22 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

class WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( int const & src );
	~WrongAnimal( void );

	WrongAnimal & operator=( WrongAnimal  const & rhs );
	void	makeSound(void) const;
	std::string	getType(void) const;

protected:
	std::string	_type;	


private:

};

#endif /* WRONGANIMAL_H */
