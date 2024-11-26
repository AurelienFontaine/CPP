/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:30 by afontain          #+#    #+#             */
/*   Updated: 2024/11/26 17:46:29 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap First("Yes");
	ClapTrap Second("No");
	
	First.status();
	
	First.attack("Yo");
	First.beRepaired(4);
	First.beRepaired(-2);

	First.status();
	
	First.attack("Test");
	First.takeDamage(-10);
	First.beRepaired(100);

	First.status();
	
	First.takeDamage(69);

	//////
	
	Second.attack("Yo");
	Second.beRepaired(4);
	Second.beRepaired(-2);

	Second.status();
	
	Second.attack("Test");
	Second.takeDamage(-10);
	Second.beRepaired(100);

	Second.status();
	
	Second.takeDamage(69);
}
