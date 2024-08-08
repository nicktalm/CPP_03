/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:10:15 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/08 13:03:32 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
		private:
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

			std::string	getName(void);
			int			gethitpoints(void);
			int			getenergypoints(void);
			int			getattackdamage(void);
			
			void	attack(const std::string& target);
			void	takeDemage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};

#endif