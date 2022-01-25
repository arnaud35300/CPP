/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:34:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/25 18:42:41 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook(void) {
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

int	Phonebook::get_count(void) {
	return (Phonebook::_count);
}

void	Phonebook::add_contact(Contact contact) {

	if (Phonebook::_count == 8)
	{
		std::cout << "You can't add new contact." << std::endl;
		return ;
	}
	this->_contacts[Phonebook::_count] = contact;
	Phonebook::_count++;
	return ;
}

void	Phonebook::display_attribute(std::string attribute) const {
	if (attribute.size() > 10)
		std::cout << std::setw(9) << attribute.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << attribute;	
	std::cout << "|";
}

void	Phonebook::print_contacts(void) const {
	this->display_attribute("index");
	this->display_attribute("firstname");
	this->display_attribute("lastname");
	this->display_attribute("nickname");
	std::cout << std::endl;
	for (int i = 0; i < this->_count; i++)
	{
		this->display_attribute(std::to_string(this->_contacts[i].get_id() + 1));
		this->display_attribute(this->_contacts[i].get_firstname());
		this->display_attribute(this->_contacts[i].get_lastname());
		this->display_attribute(this->_contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

void	Phonebook::print_contact(int id) const {
	Contact c;

	c = this->_contacts[id];
	std::cout << "Firstname: " << c.get_firstname() << std::endl;
	std::cout << "Lastname: " << c.get_lastname() << std::endl;
	std::cout << "Nickname: " << c.get_nickname() << std::endl;
	std::cout << "Phone number: " << c.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << c.get_darkest_secret() << std::endl;
}

void	Phonebook::search_contact(void) const {
	int	id;
	std::string	input;

	std::cout << "Index:" << std::endl;
	std::cin >> input;
	id = std::atoi(input.c_str());
	if (id <= 0 || id > Phonebook::_count)
	{
		std::cout << "Bad index." << std::endl;
		return ;
	}
	this->print_contact(id -1);
}

int Phonebook::_count = 0;
