/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:20 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 14:48:15 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
		public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(ScavTrap const &src);
				~ScavTrap(void);

				ScavTrap	&operator= (ScavTrap const &src);
				
				void	guardGate(void);
				void	attack(std::string const &target);

				int		getHitpoints(void);
				int		getEnergypoints(void);
				int		getAttackdamage(void);
};

#endif