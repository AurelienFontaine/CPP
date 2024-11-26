/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:22 by afontain          #+#    #+#             */
/*   Updated: 2024/11/26 17:49:00 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " created succesfully" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ToCopy) : ClapTrap(ToCopy._Name, ToCopy._att_dmg, ToCopy._hit_points, ToCopy._nrg_points)
{
	std::cout << "ScavTrap copy contructor called" << std::endl;
	*this = ToCopy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap " << _Name << " is destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &ToCopy)
{
	this->_Name = ToCopy._Name;
	this->_hit_points = ToCopy._hit_points;
	this->_nrg_points = ToCopy._nrg_points;
	this->_att_dmg = ToCopy._att_dmg;
	return(*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (_hit_points == 0 || _nrg_points == 0)
		std::cout << "Nothing can be done" << std::endl;
	else
	{
		_nrg_points -= 1;
		std::cout << "ScavTrap " << _Name << " rush into " << target << ", stabb him and dealt " << _att_dmg << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
