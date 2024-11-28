/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:59 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:05:43 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string Type) : _type(Type)
{
	std::cout << "Constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal &ToCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ToCopy;
}

Animal &Animal::operator=(const Animal &ToCopy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	return (*this);
}

void Animal::makesound(std::string type)
{
	std::cout << "" << std::endl;
}