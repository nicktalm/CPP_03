/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:10:02 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/08 13:31:38 by ntalmon          ###   ########.fr       */
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
	std::cout << "Copy Constructor called";
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
	std::cout << "Copy assignment operator called";
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

std::string	ClapTrap::getName(void)
{
	return (name);
}

int	ClapTrap::gethitpoints(void)
{
	return (hitpoints);
}

int	ClapTrap::getenergypoints(void)
{
	return (hitpoints);
}

int	ClapTrap::getattackdamage(void)
{
	return (attackdamage);
}

void	ClapTrap::attack(const std::string& target)
{
	if (hitpoints > 0 && energypoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackdamage << " points of damage!" << std::endl;
		energypoints --;
	}
}

void	ClapTrap::takeDemage(unsigned int amount)
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
		std::cout << "ClapTrapp " << name << " repaired itself and has now " << hitpoints << " hitpoints" << std::endl;
	}
}
