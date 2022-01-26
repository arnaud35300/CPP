/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:34:07 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 17:23:37 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

HumanB::HumanB(std::string name) : _name(name) ,_weapon(NULL) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

bool	HumanB::setWeapon(Weapon & weapon) {
	this->_weapon = &weapon;
	return (true);
}

void	HumanB::attack(void) const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
