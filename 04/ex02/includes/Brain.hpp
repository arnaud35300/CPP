/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:03:33 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 21:40:04 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

class Brain
{
private:
	static const int	_ideas_length = 100;

public:

	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain & operator=( Brain  const & rhs );
	std::string	ideas[Brain::_ideas_length];

protected:
		

};

#endif /* BRAIN_H */
