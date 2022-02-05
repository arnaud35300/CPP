/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:20:32 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/25 17:42:13 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

std::string	Contact::fill_attribute(std::string name) {
	std::string attribute;

	std::cout << name << std::endl;
	std::cin >> attribute;
	return (attribute);
}

void	Contact::add(void) {
	std::string	input;

	std::cout << "Add new contact:" << std::endl;
	this->set_id(Phonebook::id);
	this->set_firstname(this->fill_attribute("Firstname:"));
	this->set_lastname(this->fill_attribute("Lastname:"));
	this->set_nickname(this->fill_attribute("Nickname :"));
	this->set_phone_number(this->fill_attribute("Phone number:"));
	this->set_darkest_secret(this->fill_attribute("Darkest secret:"));
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

