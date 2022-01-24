/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:18:23 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/24 18:45:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);
	
	get_cmd(void) const;
	set_cmd(std::string cmd);

private:
	std::string	_cmd;	
};

#endif
