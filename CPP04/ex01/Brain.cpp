/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:01:31 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:01:32 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &toCopy ){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}


Brain	&Brain::operator=(const Brain &copy){
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	return(*this);
}

std::string Brain::getIdea(int index) const {
	return (this->_ideas[index]);
}

void Brain::setIdea(int index, std::string idea){
	this->_ideas[index] = idea;
}
