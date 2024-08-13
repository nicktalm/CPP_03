/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:09:47 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 12:23:24 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap("ClapTrap");
	ScavTrap	ScavTrap("ScavTrap");
	FragTrap	FragTrap("FragTrap");

	ClapTrap.attack("target");
	ClapTrap.takeDamage(10);
	ClapTrap.beRepaired(5);
	
	ScavTrap.attack("target");
	ScavTrap.takeDamage(10);
	ScavTrap.beRepaired(5);
	ScavTrap.guardGate();

	FragTrap.attack("target");
	FragTrap.takeDamage(10);
	FragTrap.beRepaired(5);
	FragTrap.highFivesGuys();

	return (0);
}