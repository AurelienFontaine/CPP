/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:02:44 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:02:45 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal &copy){
	this->_type = copy.getType();
	return(*this);
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance)
{
	ostream << instance.getType();;
	return ostream;
}


const std::string Animal::getType() const{
	return (this->_type);
}

void	Animal:: makeSound() const{
	std::cout << _type << " : Animal Sound" <<std::endl;
}
