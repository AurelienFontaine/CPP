/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:29:03 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 23:24:10 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}
 
Brain::Brain(Brain &Tocopy)
{
	if (this != &Tocopy)
		*this = Tocopy;
}

Brain	&Brain::operator = (Brain &ToCopy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = ToCopy._ideas[i];
	return (*this);
}

        
Brain::~Brain(void)
{   
	std::cout << "Brain destructor called" << std::endl;  
}
