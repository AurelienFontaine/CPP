/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:44:32 by afontain          #+#    #+#             */
/*   Updated: 2024/11/26 17:27:02 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
// {
// 	std::cout << "FragTrap default constructor is called" << std::endl;
// }

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Let's construct FragTrap " << name << std::endl;
}
		
FragTrap::~FragTrap()
{
	std::cout << "Let's destruct FragTrap" << _Name << std::endl;
}

FragTrap::FragTrap(const FragTrap &ToCopy) : ClapTrap(ToCopy._Name, ToCopy._att_dmg, ToCopy._hit_points, ToCopy._nrg_points)
{
	std::cout << "FragTrap copy contructor is called" << std::endl;
	*this = ToCopy;
}

FragTrap &FragTrap::operator = (const FragTrap &ToCopy)
{
	this->_Name = ToCopy._Name;
	this->_hit_points = ToCopy._hit_points;
	this->_nrg_points = ToCopy._nrg_points;
	this->_att_dmg = ToCopy._att_dmg;
	return(*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "High five guys !" << std::endl;
}