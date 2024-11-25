/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:26:07 by afontain          #+#    #+#             */
/*   Updated: 2024/10/25 16:35:05 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->FirstName = "None";
	this->LastName = "None";
	this->NickName = "None";
	this->PhoneNumber = 0;
	this->DarkestSecret = "None";
	return ;
}

void	Contact::printContact() 
{
	std::cout << "First Name: " << this->FirstName << std::endl;
	std::cout << "Last Name: " << this->LastName << std::endl;
	std::cout << "Nickname: " << this->NickName << std::endl;
	std::cout << "Phone Number: " << "0" << this->PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->DarkestSecret << std::endl;
}

Contact::~Contact(void)
{
//std::cout << "On detruit le Contact" << std::endl;
} 

int	Contact::isPhone(std::string str)
{
	long long int nb;
	if (isdigit(str) == 0)
		return(0);
	if (str.length() > 10)
	{
		std::cout << "Phone number too long ";
		return (0);
	}
	nb = std::strtol(str.c_str(), NULL, 10);
	if (nb < 0 || nb > 2147483647)
		return (0);
	return (1);
}

void Contact::printline(std::string line)
{
	int i = 0;
	int len;
	
	len = line.length();
	i = len;
	while (i < 10)
	{
		std::cout << " ";
		i++;
	}
	i = 0;
	if (len < 9)
	{
		while (line[i])
		{
			std::cout << line[i];
			i++;
		}
	}
	else 
	{
		while (i < 9)
		{
			std::cout << line[i];
			i++;
		}
		std::cout << '.';
	}
}	

int	Contact::isInput(std::string str) 
{
	if (str[0] == '\0' || str[0] == '\n')
		return (0);
	return (1);
}

void	Contact::search() 
{
	printline(this->FirstName);
	std::cout << "|";
	printline(this->LastName);
	std::cout << "|";
	printline(this->NickName);
	std::cout << std::endl;
}

void Contact::setLastName()
{
	std::string str;

	std::cout << "Last Name: ";
	if (!std::getline(std::cin, str))
		return;
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", last name: ";
		if (!std::getline(std::cin, str))
			return ; 
	}
	std::cout << std::endl;
	this->LastName = str;
}

void Contact::setFirstName()
{
	std::string str;

	std::cout << "First Name: ";
	if (!std::getline(std::cin, str))
		return;
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", first name: ";
		if (!std::getline(std::cin, str))
			return ; 
	}
	std::cout << std::endl;
	this->FirstName = str;
	
}
void Contact::setNickName()
{
	std::string str;

	std::cout << "Nick Name: ";
	if (!std::getline(std::cin, str))
		return;
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", nick name: ";
		if (!std::getline(std::cin, str))
			return;
	}
	std::cout << std::endl;
	this->NickName = str;
	
}
void Contact::setDarkestSecret()
{
	std::string str;

	std::cout << "Darkest Secret : ";
	if (!std::getline(std::cin, str))
		return;
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", darkest secret : ";
		if (!std::getline(std::cin, str))
			return;
	}
	std::cout << std::endl;
	this->DarkestSecret = str;
	
}

void Contact::setPhoneNumber()
{
	std::string str;
	long long int i;

	std::cout << "Phone Number : ";
	if (!std::getline(std::cin, str))
		return;
	while (isPhone(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", Phone Number : ";
		if (!std::getline(std::cin, str))
			return;
	}
	i = strtol(str.c_str(), NULL, 10);
	std::cout << std::endl;
	this->PhoneNumber = i;
}
