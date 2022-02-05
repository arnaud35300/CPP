/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:24:58 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 17:32:36 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "";
	this->_hit_points = 100;
	this->_energy_points = this->_scav_energy_points;
	this->_attack_damage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = this->_scav_energy_points;
	this->_attack_damage = 20;

	std::cout << "ScavTrap parameter constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_energy_points < 1 || this->_hit_points == 0)
		std::cout << "Insufficient energy or hit points." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " attack " << target << " and inflicts "<< this->_attack_damage << " damage on him" << std::endl;
	return ;
}
