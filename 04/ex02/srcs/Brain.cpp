/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:03:33 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/30 21:39:26 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain & Brain::operator=( Brain  const & rhs )
{
	for (int i = 0; i < Brain::_ideas_length; ++i)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
