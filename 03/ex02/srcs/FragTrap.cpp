/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:24:58 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 16:08:44 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << "give you a high five !" << std::endl;
	return ;
}
