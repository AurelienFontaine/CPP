/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:31 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:01:33 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called " << std::endl;
	_type = "Cat";
	_sound = "Miaouu";
	_brain = new Brain();
	return ;
}

Cat::Cat(std::string type, std::string sound) : Animal(type, sound)
{
	std::cout << "Cat constructor called " << std::endl;
	_brain = new Brain();
	return ;
}

Cat::Cat(Cat &toCopy)
{
	std::cout << "Cat copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called " << std::endl;
	delete _brain;
	return ;
}

Cat	&Cat::operator = (Cat &toCopy)
{
	*_brain = *toCopy._brain;
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}

Brain *Cat::getBrain(void) const
{
	return (_brain);
}

Animal	&Cat::operator = (Animal &toCopy)
{
	_type = toCopy.getType();
	_sound = toCopy.getSound();
	*_brain = *toCopy.getBrain();
	return (*this);
}
