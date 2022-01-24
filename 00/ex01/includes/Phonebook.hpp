/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:23 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/24 22:04:34 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


class	Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	std::string	get_cmd(void) const;
	void		set_cmd(std::string cmd);
	void		execute_cmd(void);
	void		add_contact(void);
	std::string	fill_contact_attribute(std::string name);
	void		print_contacts(void) const;

private:
	std::string	_cmd;
	std::string	_commands[E_COMMANDS_LENGTH] = {"ADD", "EXIT", "SEARCH"};
	Contact		*_contacts[8] = {NULL};
};

#endif
