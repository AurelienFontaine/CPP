/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:26:11 by afontain          #+#    #+#             */
/*   Updated: 2024/10/25 15:49:34 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	Contact nouveau;
	PhoneBook book;
	std::string str;
	int i = 0;
	
	std::cout << "\033[1;30mWrite a command :\033[0m";
	while(std::getline(std::cin, str))
	{

		if (str == "EXIT")
		{
			i = 1;
			return (0);
		}
		if (str == "ADD")
		{
			i = 1;			
			book.add();
		}
		if (str == "SEARCH")
		{
			i = 1;
			book.search();
		}
		if (i == 0)
			std::cout << "\033[1;31mWrong input" << ", please use :\033[0m ADD, SEARCH, or EXIT" << std::endl;
		i = 0;
		std::cout << "\033[1;32mWrite a command: \033[0m";
	}
	return (1);
}
