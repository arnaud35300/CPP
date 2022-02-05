/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:24:58 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 17:31:34 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

DiamondTrap::DiamondTrap(void)
{
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name;
	this->_name = ClapTrap::_name + "_clap_name";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_scav_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;

	std::cout << ScavTrap::_energy_points<< std::endl;
	std::cout << "DiamondTrap default constructor called" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmi(void) const
{
	std::cout << "ClapTrap [ " << ClapTrap::_name
		<< " ] DiamondTrap [ " << this->_name << " ]" << std::endl;
	return ;
}

