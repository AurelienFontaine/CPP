/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by afontain          #+#    #+#             */
/*   Updated: 2024/10/29 14:19:50 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	Zombie	*horde;
	// int	n = 3;
	long int n;
	std::string Number;
	std::string Name;
	
	std::cout << "Choose a number for the horde : ";
	if (!std::getline(std::cin, Number))
		return (1);
	n = strtol(Number.c_str(), NULL, 10);
	if (n <= 0 || n > 2147483647)
	{
		std::cout << "Please choose a good strict positiv number of zombies" << std::endl;
		return (1);
	}
	std::cout << "Choose a name for the horde : ";
	if (!std::getline(std::cin, Name))
		return (1);
	horde = ZombieHorde(n, Name);
	// horde = ZombieHorde(n, "Name");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
