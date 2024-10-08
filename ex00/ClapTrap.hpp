/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:10:15 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/08 15:51:11 by ntalmon          ###   ########.fr       */
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
			ClapTrap(ClapTrap const &src);
			ClapTrap(std::string name);
			
			~ClapTrap(void);

			ClapTrap &operator= (ClapTrap const &src);
			
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};

#endif