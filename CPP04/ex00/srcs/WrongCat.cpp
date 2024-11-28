/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:15:41 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:16:11 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string Type) : _type(Type)
{
	std::cout << "Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ToCopy)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = ToCopy;
}

WrongCat &WrongCat::operator=(const WrongCat &ToCopy) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	_type = ToCopy._type;
	return (*this);
}

void WrongCat::makesound(std::string type)
{
	std::cout << "" << std::endl;
}