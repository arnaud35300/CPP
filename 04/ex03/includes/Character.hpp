/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:04:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 15:50:32 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter {

public:

	Character( void );
	Character(std::string name);
	Character( Character const & src );
	~Character( void );

	Character & operator=( Character  const & rhs );
	
	std::string const & getName() const;
	void	equip(AMateria	*m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);	
	void	printInventory(void);
	
private:
	std::string	_name;
	static const int	inventory_max = 4;
	int	_idx;
	AMateria	*_inventory[Character::inventory_max];
};

#endif /* CHARACTER_H */
