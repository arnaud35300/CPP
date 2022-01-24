/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:34:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/24 18:42:54 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.cpp"

Phonebook::Phonebook(void) {
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

Phonebook::get_cmd(void) const {
	return (this->_cmd);
}

Phonebook::set_cmd(std::string cmd) {
	this->_cmd = cmd;
}
