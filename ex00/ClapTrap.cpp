/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:10:02 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/08 14:24:18 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor called" << std::endl;
	this->name = "Default";
	this->hitpoints = 10;
	this->energypoints = 10;
	this->attackdamage = 0;
}

ClapTrap::ClapTrap(std::string srcname)
{
	std::cout << "Constructor with name called" << std::endl;
	this->name = srcname;
	this->hitpoints = 10;
	this->energypoints = 10;
	this->attackdamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

// Destructor

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

//Operator

ClapTrap	&ClapTrap::operator= (ClapTrap const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energypoints = src.energypoints;
		this->attackdamage = src.attackdamage;
	}
	return (*this);
}

// Memberfunctions

void	ClapTrap::attack(const std::string& target)
{
	if (hitpoints > 0 && energypoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackdamage << " points of damage!" << std::endl;
		energypoints --;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints > 0 && energypoints > 0)
	{
		std::cout << "ClapTrap " << name << " get attacked and lost " << amount << " hitpoints!" << std::endl;
		hitpoints = hitpoints - amount;
		if (hitpoints > 0)
			std::cout << "ClapTrap " << name << " has " << hitpoints << " hitpoints left!" << std::endl;
		else
			std::cout << "ClapTrap " << name << " is dead!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints > 0 && energypoints > 0)
	{
		hitpoints = hitpoints + amount;
		energypoints--;
		std::cout << "ClapTrap " << name << " repaired itself and has now " << hitpoints << " hitpoints" << std::endl;
	}
}
