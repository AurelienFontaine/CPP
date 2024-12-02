/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:30 by afontain          #+#    #+#             */
/*   Updated: 2024/11/27 16:37:57 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap First("X");
	FragTrap Second("Y");
	FragTrap Third("Z");

	// ClapTrap Test("yo");
	// Test.guardGate();
	
	First.status();

	// First.takeDamage(12);
	
	First.attack("Yo");
	First.beRepaired(4);
	First.takeDamage(10);
	First.beRepaired(-2);
	First.beRepaired(4);
	First.beRepaired(4);

	First.status();
	
	First.beRepaired(4);
	First.attack("Lui");
	First.attack("Test");
	First.takeDamage(-10);
	First.beRepaired(100);

	First.status();
	
	First.takeDamage(69);
	
	First.highFivesGuys();
	First.status();
}
