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

Character::Character(void) : _name("Random player")
{
	for (int i = 0; i < 4; ++i)
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
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = src;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character &	Character::operator=(Character const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete	this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 4)
		this->_inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	return ;
}

void	Character::printInventory(void)
{
	std::cout << "[ " << this->getName() << " ] Inventory :" << std::endl;
	for (int i = 0; i <  4; ++i)
		if (this->_inventory[i])
			std::cout << "[" << i << "] " << this->_inventory[i]->getType() << std::endl;
}
