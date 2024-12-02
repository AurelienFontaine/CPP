/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:44:32 by afontain          #+#    #+#             */
/*   Updated: 2024/11/27 16:35:49 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default", 100, 100, 30)
{
	std::cout << "FragTrap Default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Let's construct FragTrap " << name << std::endl;
}
		
FragTrap::~FragTrap()
{
	std::cout << "Let's destruct FragTrap " << _Name << std::endl;
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

void FragTrap::attack(const std::string& target)
{
	if (_hit_points == 0 || _nrg_points == 0)
		std::cout << "No more energy or HP to do something" << std::endl;
	else
	{
		_nrg_points -= 1;
		std::cout << _Name << " kick " << target << ", causing " << _att_dmg << " damage of terrible pain !" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "Hiiiiigh Five !" << std::endl;
}