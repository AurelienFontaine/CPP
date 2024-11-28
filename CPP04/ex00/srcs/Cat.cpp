/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:51 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:15:04 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Cat::Cat(std::string Type) : _type(Type)
{
	std::cout << "Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Cat::Cat(const Cat &ToCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ToCopy;
}

Cat &Cat::operator=(const Cat &ToCopy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	return (*this);
}

void Cat::makesound(std::string type)
{
	std::cout << "" << std::endl;
}