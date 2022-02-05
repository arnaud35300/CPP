/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:03:55 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 12:02:03 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap {

public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src );
	~ClapTrap( void );

	ClapTrap & operator=( ClapTrap  const & rhs );

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	const std::string &	getName(void) const;
	int	getHitPoints(void) const;
	int	getEnergyPoints(void) const;
	int	getAttackDamage(void) const;

protected:
	std::string	_name;
	int	_hit_points;
	int	_energy_points;
	int	_attack_damage;
	ClapTrap(void);
};

std::ostream &	operator<<(std::ostream & o, ClapTrap const & rhs);

#endif /* CLAPTRAP_H */
