/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:55:05 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:55:07 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::string	input;

	std::cout << "Type : [DEBUG / INFO / WARNING / ERROR] or EXIT to quit the programm" << std::endl;
	std::getline(std::cin, input);
	while (std::cin.eof() == false && input.compare("EXIT"))
	{
		harl.complain(input);
		std::getline(std::cin, input);
	}
	return (0);
}
