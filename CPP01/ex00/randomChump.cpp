/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:50:45 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:50:47 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie zomzom(name);

	zomzom.announce();
}

void	Zombie::announce()
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
