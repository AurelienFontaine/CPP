/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:54 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:15:22 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Dog::Dog(std::string Type) : _type(Type)
{
	std::cout << "Constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called" << std::endl;
}

Dog::Dog(const Dog &ToCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ToCopy;
}

Dog &Dog::operator=(const Dog &ToCopy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	return (*this);
}

void Dog::makesound(std::string type)
{
	std::cout << "" << std::endl;
}