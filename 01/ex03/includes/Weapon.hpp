/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:29:19 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/02 17:47:53 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

class Weapon {

public:
	Weapon(std::string type);
	~Weapon(void);
	std::string	const &  getType(void) const;
	void	setType(std::string type);
private:
	std::string	_type;

};

#endif /* WEAPON_H */
