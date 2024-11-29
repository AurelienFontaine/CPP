/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:15:25 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 15:11:07 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "Abeille";
	_sound = "Bzzzzz";
	std::cout << "Wrong Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type, std::string sound) : _type(type), _sound(sound)
{
	std::cout << "Wrong Animal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ToCopy)
{
	std::cout << "Wrong Animal Copy contructor called" << std::endl;
	if (this != &ToCopy)
		*this = ToCopy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ToCopy) 
{
	std::cout << "Wrong Animal Copy assignment operator called" << std::endl;
	this->_type = ToCopy._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << _sound << std::endl;
}
