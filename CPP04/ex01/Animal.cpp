/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:59 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 00:17:00 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default type"), _sound("Default sound")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type, std::string sound) : _type(type), _sound(sound)
{
	std::cout << "Animal " << _type << " Constructor called" << std::endl;
}

Animal::Animal(Animal &ToCopy)
{
	std::cout << "Animal Copy contructor called" << std::endl;
	if (this != &ToCopy)
		*this = ToCopy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &ToCopy) 
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	_sound = ToCopy._sound;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << _sound << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}

std::string Animal::getSound(void) const
{
	return (_sound);
}
