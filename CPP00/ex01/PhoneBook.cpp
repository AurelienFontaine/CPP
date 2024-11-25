/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:26:14 by afontain          #+#    #+#             */
/*   Updated: 2024/10/25 16:35:18 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook(void):i(0) 
{
	// std::cout << "On construit un book" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) 
{
	// std::cout << "On detruit un book" << std::endl;
	return ;
}

int  PhoneBook::checkContact(std::string str)
{
	long int nb;

	if (isdigit(str) == 0)
		return (0);
	nb = std::strtol(str.c_str(), NULL, 10);
	if (nb > this->i || nb > 2147483647 || nb > 8 || nb < 0 )
		return (0);
	if (nb > 0)	
		this->Contact[nb - 1].printContact();
	return (1);	
}

void PhoneBook::add()
{
	int j = 0;
	
	j = i%8;
	this->Contact[j].setFirstName();
	this->Contact[j].setLastName();
	this->Contact[j].setNickName();
	this->Contact[j].setDarkestSecret();
	this->Contact[j].setPhoneNumber();
	this->i++;
	return ;
}
			
void PhoneBook::search()
{
	int j = 0;
	std::string str;

	std::cout << "List:|  Index    |  First   |   Last   | Nickname   " << std::endl;
	while(j < i && j < 8)
	{
		std::cout << "     |     " << (j+1) << "     |";
		this->Contact[j].search();
		j++;
	}
	std::cout << std::endl;
	if (i == 0)
		return ;
	std::cout << "Chose a contact (0 for none and leave): ";
	if (!std::getline(std::cin, str))
		return ;
	while (checkContact(str) == 0)
	{
		std::cout << std::endl;
		std::cout << " \033[1;31mWrong imput,\033[0;m choose a contact, (0) for none : ";
		if (!std::getline(std::cin, str))
			return ;
	}
}
