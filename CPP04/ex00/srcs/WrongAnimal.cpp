/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:15:25 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:15:37 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type) : _type(Type)
{
	std::cout << "Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ToCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ToCopy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ToCopy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	return (*this);
}

void WrongAnimal::makesound(std::string type)
{
	std::cout << "" << std::endl;
}