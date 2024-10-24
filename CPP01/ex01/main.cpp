/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:17 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:53:19 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>

int	main(void)
{
	Zombie	*horde;
	int	n = 5;
	
	// std::cout << "Choose a number for the horde : ";
	// scanf("%d", &n);
	if (n <= 0)
	{
		std::cout << "Please choose a strict positiv number of zombies" << std::endl;
		return (1);
	}
	horde = ZombieHorde(n, "Aurel");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
