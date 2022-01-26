/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:34:07 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 17:11:10 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

class HumanA {

public:

	HumanA(std::string name, Weapon & weapon);
	~HumanA( void );
	void	attack(void) const;
private:
	std::string	_name;
	Weapon		&_weapon;	
};

#endif /* HUMANA_H */
