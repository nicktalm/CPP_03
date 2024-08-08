/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:09:47 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/08 14:18:28 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap1;
	ClapTrap	ClapTrap2("ClapTrap2");
	ClapTrap	ClapTrap3(ClapTrap2);
	
	ClapTrap1 = ClapTrap3;

	ClapTrap1.attack("ClapTrap2");
	ClapTrap2.takeDamage(5);
	ClapTrap2.beRepaired(5);

	return (0);
}