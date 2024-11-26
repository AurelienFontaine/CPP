/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:27 by afontain          #+#    #+#             */
/*   Updated: 2024/11/26 16:30:13 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string _Name;
		int 		_hit_points;
		int 		_nrg_points;
		int 		_att_dmg;
		
	public:
		ClapTrap(std::string ClapTrap);
		ClapTrap(void);
		ClapTrap(std::string Name, unsigned int hit_points, unsigned int nrg_points, unsigned int att_dmg);
		~ClapTrap();
		ClapTrap(const ClapTrap &ToCopy);

		ClapTrap& operator = (const ClapTrap &ToCopy);
		
		void status();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif