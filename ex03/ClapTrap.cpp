/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:10:02 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/14 11:47:14 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor

ClapTrap::ClapTrap(void):
	name("Default"),
	hitpoints(10),
	energypoints(10),
	attackdamage(0)
{
	std::cout << "ClapTrap default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string srcname):
	name(srcname),
	hitpoints(10),
	energypoints(10),
	attackdamage(0)
{
	std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src):
	name(src.name),
	hitpoints(src.hitpoints),
	energypoints(src.energypoints),
	attackdamage(src.attackdamage)
{
	std::cout << "ClapTrap copy Constructor called" << std::endl;
}

// Destructor

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

//Operator

ClapTrap	&ClapTrap::operator= (ClapTrap const &src)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
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
	else
		std::cout << "ClapTrap " << name << " can't attack because he is dead or out of energy" << std::endl;
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

void	ClapTrap::setName(std::string srcname)
{
	name = srcname;
}

std::string	ClapTrap::getName(void) const
{
	return (name);
}
