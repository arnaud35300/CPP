/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:34:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/24 22:04:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook(void) :  _cmd("") {
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

std::string	Phonebook::get_cmd(void) const {
	return (this->_cmd);
}

void	Phonebook::set_cmd(std::string cmd) {
	bool	is_cmd = false;

	for (unsigned char i = 0; i < sizeof(this->_commands)/sizeof(this->_commands[0]); i++)
		if (this->_commands[i] == cmd)
			is_cmd = true;
	if (is_cmd)
		this->_cmd = cmd;
	else
		this->_cmd = "";
	return ;
}

std::string	Phonebook::fill_contact_attribute(std::string name) {
	std::string	attr;

	std::cout << name << std::endl;
	std::cin >> attr;

	return (attr);
}

void	Phonebook::add_contact(void) {
	Contact	contact;

	contact.set_firstname(this->fill_contact_attribute("Firstname:"));
	contact.set_lastname(this->fill_contact_attribute("Lastname:"));
	contact.set_nickname(this->fill_contact_attribute("Nickname :"));
	contact.set_phone_number(this->fill_contact_attribute("Phone number:"));
	contact.set_darkest_secret(this->fill_contact_attribute("Darkest secret:"));
	this->_contacts[Contact::get_nb_instance() - 1] = &contact;

	std::cout <<" WESH";
}

void	Phonebook::execute_cmd(void) {
	if (this->_cmd == "")
		return ;
	else if (this->_cmd == "ADD")
	{
		if (Contact::get_nb_instance() <= 8)
			this->add_contact();
		else
			std::cout << "You can't add new contact." << std::endl;
	}
}

void	Phonebook::print_contacts(void) const {
	int	i = 0;

	while (this->_contacts[i] != NULL)
	{
		std::cout << "Id: " << this->_contacts[i]->get_id() << std::endl;
		std::cout << "Firstname: " << this->_contacts[i]->get_firstname() << std::endl;
		std::cout << "Lastname: " << this->_contacts[i]->get_lastname() << std::endl;
		std::cout << "Nickname: " << this->_contacts[i]->get_nickname() << std::endl;
		std::cout << "Phone number: " << this->_contacts[i]->get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[i]->get_darkest_secret() << std::endl;
		i++;
	}
}
