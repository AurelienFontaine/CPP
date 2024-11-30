/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:15:41 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 14:56:41 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type, std::string sound) : WrongAnimal(type, sound)
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &ToCopy) : WrongAnimal(ToCopy._sound, ToCopy._type)
{
	std::cout << "WrongCat Copy contructor called" << std::endl;
	if (this != &ToCopy)
		*this = ToCopy;
}

WrongCat &WrongCat::operator=(WrongCat &ToCopy) 
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	_sound = ToCopy._sound;
	return (*this);
}
