/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:22:12 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 15:26:32 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " Called." << std::endl; 
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " Destroyed." << std::endl; 
	return ;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
