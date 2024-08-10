/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicktalmon <nicktalmon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:12 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/10 15:19:28 by nicktalmon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default Constructor called" << std::endl;
	this->name = "Default";
	this->hitpoints = 100;
	this->energypoints = 50;
	this->attackdamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor with name called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 50;
	this->attackdamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

// Destructor

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

// Operator

ScavTrap	&ScavTrap::operator= (ScavTrap const &src)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energypoints = src.energypoints;
	this->attackdamage = src.attackdamage;
	return (*this);
}

// Member functions

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (hitpoints > 0 && energypoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackdamage << " points of damage!" << std::endl;
		energypoints --;
	}
	else
		std::cout << "ScavTrap " << name << " can't attack because he is dead or out of energy" << std::endl;
}