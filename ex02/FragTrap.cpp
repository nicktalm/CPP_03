/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:17:42 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 12:24:06 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructor

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default Constructor called" << std::endl;
	this->name = "Default";
	this->hitpoints = 100;
	this->energypoints = 100;
	this->attackdamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor with name called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energypoints = 100;
	this->attackdamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

// Destructor

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

// Operator

FragTrap	&FragTrap::operator= (FragTrap const &src)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->name = src.name;
	this->hitpoints = src.hitpoints;
	this->energypoints = src.energypoints;
	this->attackdamage = src.attackdamage;
	return (*this);
}

// Member functions

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " wants a high five" << std::endl;
}