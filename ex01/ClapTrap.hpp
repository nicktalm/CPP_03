/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicktalmon <nicktalmon@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:10:15 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/10 14:38:23 by nicktalmon       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
		protected:
			std::string	name;
			int			hitpoints;
			int			energypoints;
			int			attackdamage;
		public:
			ClapTrap(void);
			ClapTrap(ClapTrap const &cpy);
			ClapTrap(std::string name);
			
			~ClapTrap(void);

			ClapTrap &operator= (ClapTrap const &cpy);
			
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};

#endif