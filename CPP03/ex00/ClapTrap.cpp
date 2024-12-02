/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:22 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 09:53:53 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Default"), _hit_points(10), _nrg_points(10), _att_dmg(0)
{
	std::cout << "Claptrap Default is created" << std::endl;	
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _hit_points(10), _nrg_points(10), _att_dmg(0)
{
	std::cout << "Claptrap " << _Name << " is created" << std::endl;	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap " << _Name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ToCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ToCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ToCopy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_Name = ToCopy._Name;
	return (*this);
}

void	ClapTrap::status()
{
	std::cout << "-----------" << std::endl;
	std::cout << "Name : " << _Name << std::endl;
	std::cout << "Hit Points : " << _hit_points << std::endl;
	std::cout << "Energy : " << _nrg_points << std::endl;
	std::cout << "Attack : " << _att_dmg << std::endl;
	std::cout << "-----------" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0 || _nrg_points == 0)
		std::cout << "Nothing can be done" << std::endl;
	else
	{
		_nrg_points -= 1;
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _att_dmg << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 2147483647)
			std::cout << "Can't take this amount of damage" << std::endl;
	else if (amount >= static_cast<unsigned>(_hit_points))
	{
		_hit_points = 0;
		std::cout << "ClapTrap " << _Name << " lost all his HP !"<< std::endl;
	}
	else
	{
		_hit_points -= amount;
		std::cout << "ClapTrap " << _Name << " take " << amount << " dammage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0 || _nrg_points == 0)
		std::cout << "Nothing can be done, no more Energie or HP" << std::endl;
	if ( _hit_points == 10 )
		std::cout << "Can't repair, already at max HP" << std::endl;
	else
	{
		if (amount > 2147483647)
			std::cout << "Can't repare this amount" << std::endl;
		else 
		{
			_nrg_points -= 1;
			if (_hit_points + amount > 10)
			{
				_hit_points = 10;
				std::cout << "ClapTrap " << _Name << " repairs itself to max Hit Points (10) !" << std::endl;
			}
			else 
			{
				_hit_points += amount;
				std::cout << "ClapTrap " << _Name << " repairs itself for " << amount << " points of damage !" << std::endl;	
			}
		}
	}
}