/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:30 by afontain          #+#    #+#             */
/*   Updated: 2024/11/27 16:30:06 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap First("Yes");
	// ScavTrap Fourth;
	
	ClapTrap Second("No");
	// ClapTrap Third;
	
	// Second.status();
	// First.status();
	
	// First.attack("Test");

	// First.status();
	// First.takeDamage(90);
	
	// Second.status();
	// First.status();

	// First.takeDamage(90);
	// Second.takeDamage(110);

	// Second.status();
	First.status();
	
	First.takeDamage(40);
	First.beRepaired(4);
	First.beRepaired(-2);

	First.status();
	
	First.attack("Test");
	Second.attack("Test");
	First.takeDamage(70);
	// First.takeDamage(60);
	First.beRepaired(110);

	First.status();
	
	First.takeDamage(69);

	// //////
	
	// Second.attack("Yo");
	// Second.beRepaired(4);
	// Second.beRepaired(-2);

	// Second.status();
	
	// Second.attack("Test");
	// Second.takeDamage(-10);
	// Second.beRepaired(100);

	// Second.status();
	
	// Second.takeDamage(69);
}
