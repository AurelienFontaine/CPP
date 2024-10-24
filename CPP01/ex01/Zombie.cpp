/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:26 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:53:29 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " --- tshuss !" << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << _name << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}
