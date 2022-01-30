/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:39:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 20:42:40 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

class Cat : public Animal
{

public:

	Cat( void );
	Cat( int const & src );
	virtual ~Cat( void );

	Cat & operator=( Cat  const & rhs );
	virtual void	makeSound(void) const;
	std::string	getType(void) const;

protected:


private:

};

#endif /* CAT_H */
