/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:51 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 14:54:50 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	_sound = "Miaouu";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string type, std::string sound) : Animal(type, sound)
{
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat &ToCopy) : Animal(ToCopy._sound, ToCopy._type)
{
	std::cout << "Cat Copy contructor called" << std::endl;
	if (this != &ToCopy)
		*this = ToCopy;
}

Cat &Cat::operator=(Cat &ToCopy) 
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	_sound = ToCopy._sound;
	return (*this);
}
