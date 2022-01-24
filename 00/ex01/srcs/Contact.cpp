/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:20:32 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/24 22:04:26 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void) {
	Contact::_nb_instance += 1;
	this->set_id(Contact::get_nb_instance());
	return ;
}

Contact::~Contact(void) {
	std::cout << "Destructor contact." << std::endl;
	return ;
}

int	Contact::get_nb_instance (void) {
	return (Contact::_nb_instance);
}

int	Contact::get_id (void) const {
	return (this->_id);
}

std::string	Contact::get_firstname (void) const {
	return (this->_firstname);
}

std::string	Contact::get_lastname (void) const {
	return (this->_lastname);
}

std::string	Contact::get_nickname (void) const {
	return (this->_nickname);
}

std::string	Contact::get_phone_number (void) const {
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret (void) const {
	return (this->_darkest_secret);
}

void	Contact::set_id (int id) {
	this->_id = id;
}

void	Contact::set_firstname (std::string firstname) {
	this->_firstname = firstname;
}

void	Contact::set_lastname (std::string lastname) {
	this->_lastname = lastname;
}

void	Contact::set_nickname (std::string nickname) {
	this->_nickname = nickname;
}

void	Contact::set_phone_number (std::string phone_number) {
	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret (std::string darkest_secret) {
	this->_darkest_secret = darkest_secret;
}

int	Contact::_nb_instance = 0;
