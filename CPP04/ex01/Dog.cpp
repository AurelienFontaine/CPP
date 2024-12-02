/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:02:29 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:02:30 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain()){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = NULL;
	*this = copy;
	return;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog &copy){
	if (this != &copy)
	{
		this->_type = copy._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*(copy._brain));
	}
	return(*this);
}

Brain *Dog::getBrain(void) const{
	return (_brain);
}

void	Dog:: makeSound() const{
	std::cout << _type << ": Waf" <<std::endl;
}
