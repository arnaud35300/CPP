/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:19:05 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 15:38:32 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void) const;
private:
	std::string	_name;
};

#endif
