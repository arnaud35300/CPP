/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:39:24 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 20:05:12 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Karen::Karen(void) {
	return ;
}

Karen::~Karen(void) {
	return ;
}

void	Karen::complain(std::string level) {
	void	(Karen::*func[])(void) = {
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (unsigned int i = 0; i < sizeof(levels)/sizeof(levels[0]); i++)
	{
		if (levels[i].compare(level) == 0)
			(this->*func[i])();
	}
}

void	Karen::_debug(void) {
	std::cout << "I love having extra bacon for my 8XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Karen::_info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}
void	Karen::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}
void	Karen::_error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
	return ;
}
