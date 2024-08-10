/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicktalmon <nicktalmon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:20 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/10 14:53:46 by nicktalmon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
		public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(ScavTrap const &src);
				~ScavTrap(void);

				ScavTrap	&operator= (ScavTrap const &src);
				
				void	guardGate(void);
				void	attack(std::string const &target);
};

#endif