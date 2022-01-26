/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:29:19 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 16:55:56 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

std::string	Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
