/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:09:47 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 17:06:04 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap("ClapTrap");
	ScavTrap	ScavTrap("ScavTrap");
	FragTrap	FragTrap("FragTrap");
	DiamondTrap	DiamondTrap("DiamondTrap");

	ClapTrap.attack("target");
	ClapTrap.takeDamage(10);
	ClapTrap.beRepaired(5);
	ClapTrap.setName("ClapTrap");
	std::cout << ClapTrap.getName() << std::endl;

	ScavTrap.attack("target");
	ScavTrap.takeDamage(10);
	ScavTrap.beRepaired(5);
	ScavTrap.guardGate();

	FragTrap.attack("target");
	FragTrap.takeDamage(10);
	FragTrap.beRepaired(5);
	FragTrap.highFivesGuys();

	DiamondTrap.attack("target");
	DiamondTrap.takeDamage(10);
	DiamondTrap.beRepaired(5);
	DiamondTrap.whoAmI();

	return (0);
}