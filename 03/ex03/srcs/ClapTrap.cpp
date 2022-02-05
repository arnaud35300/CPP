/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:03:55 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 17:06:27 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

ClapTrap::ClapTrap(void): _name(""), _hit_points(0), _energy_points(0), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap parameter constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Call copy constructor" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	(void)rhs;
	return (*this);
}


void	ClapTrap::attack(const std::string & target)
{
	if (this->_energy_points < 1 || this->_hit_points == 0)
		std::cout << "Insufficient energy or hit points." << std::endl;
	else
		std::cout << "Claptrap " << this->_name << " attack " << target << " and inflicts "<< this->_attack_damage << " damage on him" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << "Claptrap " << this->_name << " took " << amount << " points of damage. " << this->_hit_points << " remaining." << std::endl; 
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points < 1 || this->_hit_points == 0)
		std::cout << "Insufficient energy or hit points." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself and recovers " << amount << " hit points" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
	return ;
}

const std::string &	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const & rhs)
{
	std::cout << "[ ClapTrap : " << rhs.getName() << " ]" << std::endl
			<< "hit points: " << rhs.getHitPoints() << std::endl
			<< "energy points: " << rhs.getEnergyPoints() << std::endl
			<< "attack damage: " << rhs.getAttackDamage() << std::endl << std::endl;
	return (o);
}
