/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:59 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/25 17:41:53 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact {

public:
	Contact(void);
	~Contact(void);
	
	int			get_id(void) const;
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;
	void		set_id (int id);
	void		set_firstname (std::string firstname); 
	void		set_lastname (std::string lastname); 
	void		set_nickname (std::string nickname);
	void		set_phone_number (std::string phone_number);
	void		set_darkest_secret (std::string darkest_secret);
	void		add(void);
	std::string	fill_attribute(std::string name);

private:
	int			_id;
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

# endif
