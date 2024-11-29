/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:54 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 18:24:44 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	_sound = "Waouf";
	_brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string type, std::string sound) : Animal(type, sound)
{
	std::cout << "Dog Constructor called" << std::endl;
}


Dog::Dog(Dog &other) : Animal(other._sound, other._type)
{
	std::cout << "Dog Copy contructor called" << std::endl;
	if (this != &other)
		*this = other;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog &other) 
{
	_type = other._type;
	_sound = other._sound;
	_brain = other._brain;
	return (*this);
}
