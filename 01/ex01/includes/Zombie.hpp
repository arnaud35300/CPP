/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:19:05 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 15:59:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void	announce(void) const;
	void	setName(std::string name);
private:
	std::string	_name;
};

#endif
