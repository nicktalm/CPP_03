/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:17:50 by ntalmon           #+#    #+#             */
/*   Updated: 2024/08/13 17:36:56 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string srcname);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap	&operator= (FragTrap const &src);

		void	highFivesGuys(void);

		int		getHitpoints(void);
		int		getEnergypoints(void);
		int		getAttackdamage(void);
};

#endif