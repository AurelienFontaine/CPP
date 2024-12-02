/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:01:37 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:06:11 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat"), _brain(new Brain()){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain()){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = NULL;
	*this = copy;
	return;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat &copy){
	if (this != &copy)
	{
		this->_type = copy._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*(copy._brain));
	}
	return(*this);
}

Brain *Cat::getBrain(void) const{
	return (_brain);
}

void	Cat:: makeSound() const{
	std::cout << _type << ": Miaouu" <<std::endl;
}
