/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:23 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/25 18:36:02 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

	void		display_attribute(std::string attribute) const;
	void		add_contact(Contact contact);
	void		print_contacts(void) const;
	static int	get_count(void);
	void		search_contact(void) const;
	void		print_contact(int id) const;
private:
	static int	_count;
	Contact		_contacts[8];
};

#endif
