/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:39 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:01:41 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called " << std::endl;
	_type = "Dog"; 
	_sound = "Wouaf";
	_brain = new Brain();
	return ;
}

Dog::Dog(std::string type, std::string sound) : Animal(type, sound)
{
	std::cout << "Dog constructor called " << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog(Dog &toCopy)
{
	std::cout << "Dog copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called " << std::endl;
	delete _brain;
	return ;
}

Dog	&Dog::operator = (Dog &toCopy)
{
	*_brain = *toCopy._brain;
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}

Brain *Dog::getBrain(void) const
{
	return (_brain);
}

Animal	&Dog::operator = (Animal &toCopy)
{
	_type = toCopy.getType();
	_sound = toCopy.getSound();
	*_brain = *toCopy.getBrain();
	return (*this);
}
