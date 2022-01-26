/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:34:07 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 17:23:34 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

class HumanB {

public:
	HumanB(std::string name);
	~HumanB( void );
	void	attack(void) const;
	bool	setWeapon(Weapon & weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif /* HUMANA_H */
