/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:30 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 10:37:49 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap First;
	ClapTrap Second("Lui");
	
	First.status();
	Second.status();
	
	First = Second;
	// First.takeDamage(12);
	First.takeDamage(1);

	First.status();
	Second.status();
	
	First.attack("Lui"); 
	First.beRepaired(123);
	First.beRepaired(4);


	First.status();
	
	First.beRepaired(2);
	First.attack("Lui");
	First.attack("Test");
	First.takeDamage(5);
	First.beRepaired(100);

	First.status();
	
	First.takeDamage(69);
	
	First.status();
}
