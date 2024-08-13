/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:17:00 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 17:03:51 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default Constructor called" << std::endl;
	this->name = "Default";
	this->hitpoints = FragTrap::getHitpoints();
	this->energypoints = ScavTrap::getEnergypoints();
	this->attackdamage = FragTrap::getAttackdamage();
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Constructor with name called" << std::endl;
	this->name = name;
	ClapTrap::setName(name + "_clap_name");
	this->hitpoints = FragTrap::getHitpoints();
	this->energypoints = ScavTrap::getEnergypoints();
	this->attackdamage = FragTrap::getAttackdamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy Constructor called" << std::endl;
	*this = src;
}

// Destructor

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

// Operator

DiamondTrap	&DiamondTrap::operator= (DiamondTrap const &src)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energypoints = src.energypoints;
	this->attackdamage = src.attackdamage;
	return (*this);
}

// Member functions

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}
