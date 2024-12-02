/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:22 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 10:58:19 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Default"), _hit_points(100), _nrg_points(50), _att_dmg(20)
{
	std::cout << "Claptrap default is created" << std::endl;	
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _hit_points(100), _nrg_points(50), _att_dmg(20)
{
	std::cout << "Claptrap " << _Name << " is created" << std::endl;	
}

ClapTrap::ClapTrap(std::string Name, unsigned int hit_points, unsigned int nrg_points, unsigned int att_dmg) : _Name(Name), _hit_points(hit_points), _nrg_points(nrg_points), _att_dmg(att_dmg)
{
	std::cout << "Claptrap " << Name << " is created !" << std::endl;	
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

void	ClapTrap::status()
{
	std::cout << "-----------" << std::endl;
	std::cout << "Name : " << _Name << std::endl;
	std::cout << "Hit Points : " << _hit_points << std::endl;
	std::cout << "Energy : " << _nrg_points << std::endl;
	std::cout << "Attack : " << _att_dmg << std::endl;
	std::cout << "-----------" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &ToCopy)
{
	this->_Name = ToCopy._Name;
	this->_hit_points = ToCopy._hit_points;
	this->_nrg_points = ToCopy._nrg_points;
	this->_att_dmg = ToCopy._att_dmg;
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0 || _nrg_points == 0)
		std::cout << "No more energy or hp to attack" << std::endl;
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
		std::cout << _Name << " lost all his HP !"<< std::endl;	
	}
	else
	{
		_hit_points -= amount;
		std::cout << _Name << " take " << amount << " dammage" << std::endl;
		
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0 || _nrg_points == 0)
		std::cout << "Nothing can be done" << std::endl;
	if ( _hit_points == 100)
		std::cout << "Can't repair, already at max HP" << std::endl;
	else
	{
		if (amount > 2147483647)
			std::cout << "Can't repare this amount" << std::endl;
		else 
		{
			_nrg_points -= 1;
			if (_hit_points + amount > 100)
			{
				_hit_points = 100;
				std::cout << _Name << " repairs itself to max Hit Points (100) !" << std::endl;
			}
			else 
			{
				_hit_points += amount;
				std::cout << _Name << " repairs itself for " << amount << " points of damage !" << std::endl;	
			}
		}
	}
}
