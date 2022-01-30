/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 21:00:54 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

class WrongCat : public WrongAnimal
{

public:

	WrongCat( void );
	WrongCat( int const & src );
	~WrongCat( void );

	WrongCat & operator=( WrongCat  const & rhs );
	void	makeSound(void) const;
	std::string	getType(void) const;

protected:


private:

};

#endif /* WRONGCAT_H */
