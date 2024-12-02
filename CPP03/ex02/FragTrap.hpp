/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:44:52 by afontain          #+#    #+#             */
/*   Updated: 2024/11/27 16:13:06 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &ToCopy);

		FragTrap& operator = (const FragTrap &ToCopy);
		
		void attack(const std::string& target);
		void highFivesGuys();
};

#endif