/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:49:30 by afontain          #+#    #+#             */
/*   Updated: 2024/11/26 16:32:52 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap First("Moi");
	ClapTrap Second("Lui");
	First.status();
	

	// First.takeDamage(12);
	First.attack("Lui"); 
	First.beRepaired(4);
	First.beRepaired(-2);
	First.beRepaired(4);
	First.beRepaired(4);

	First.status();
	
	First.beRepaired(2);
	First.attack("Lui");
	First.attack("Test");
	First.takeDamage(-10);
	First.beRepaired(100);
	First.status();
	First.takeDamage(69);
	
	First.status();
}
