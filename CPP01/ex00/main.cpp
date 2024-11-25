/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:48:54 by afontain          #+#    #+#             */
/*   Updated: 2024/11/18 18:56:38 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z1("Aurel");
	Zombie *ptr = newZombie("ptr");

	z1.randomChump("Benj");
	ptr->announce();
	delete (ptr);
	return (0);
}
