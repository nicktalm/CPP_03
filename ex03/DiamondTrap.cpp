/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:17:00 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 14:49:35 by ntalmon          ###   ########.fr       */
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

