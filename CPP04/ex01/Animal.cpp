/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:09 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:04:21 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default type"), _sound("Default sound")
{
	std::cout << "Animal default constructor called " << std::endl;
	return ;
}

Animal::Animal(std::string type, std::string sound) : _type(type), _sound(sound)
{
	std::cout << "Animal "<< _type << " constructor called " << std::endl;
	return ;
}

Animal::Animal(Animal &toCopy)
{
	std::cout << "Animal copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called " << std::endl;
	return ;
}

Animal	&Animal::operator = (Animal &toCopy)
{
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

std::string Animal::getSound(void) const
{
	return (_sound);
}

void	Animal::makeSound(void) const
{
	std::cout << _sound << std::endl;
}

