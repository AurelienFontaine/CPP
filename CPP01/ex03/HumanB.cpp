/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:12 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:54:15 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!_weapon)
		std::cout << getName() << " attacks with their feets" << std::endl;
	else
		std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}

std::string	HumanB::getName(void) const
{
	return (_name);
}
