/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:04:22 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/31 16:13:07 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Character::Character(void) : _name("Random player"), _idx(0)
{
	for (int i = 0; i < Character::inventory_max; ++i)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(std::string name)
{
	*this = Character();
	this->_name = name;
	return ;
}

Character::Character(Character const & src)
{
	*this = src;	
	return ;
}

Character::~Character(void)
{
	return ;
}

Character &	Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	this->_idx = rhs._idx;
	for (int i = 0; i < Character::inventory_max; i++)
	{
		this->_inventory[i] = rhs._inventory[i];
	}
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_idx >= Character::inventory_max)
		return ;
	this->_inventory[this->_idx] = m;
	this->_idx++;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_idx)
		return ;
	int i = 0, j = 0;
	while (i < this->_idx)
	{
		if (i != idx)
		{
			this->_inventory[j] = this->_inventory[i];
			j++;
		}
		i++;
	}
	this->_inventory[i] = NULL;
	this->_idx--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > Character::inventory_max || idx > this->_idx)
		return ;
	this->_inventory[idx]->use(target);
}

void	Character::printInventory(void)
{
	std::cout << "[ " << this->getName() << " ] Inventory (" << this->_idx << "):" << std::endl;
	for (int i = 0; i < this->_idx; ++i)
		std::cout << "[" << i << "] " << this->_inventory[i]->getType() << std::endl;
}
