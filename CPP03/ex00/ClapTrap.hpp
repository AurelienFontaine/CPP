/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:27 by afontain          #+#    #+#             */
/*   Updated: 2024/11/27 12:33:10 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _Name;
		int 		_hit_points;
		int 		_nrg_points;
		int 		_att_dmg;
	public:
		ClapTrap(void);
		ClapTrap(std::string ClapTrap);
		~ClapTrap();
		ClapTrap(const ClapTrap &ToCopy);

		ClapTrap& operator = (const ClapTrap &ToCopy);
		
		void status();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif