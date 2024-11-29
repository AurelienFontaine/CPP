/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:29:03 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 18:30:28 by afontain         ###   ########.fr       */
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

Brain& Brain::operator=(std::string &Tocopy)
{
    return(*this);
}
        
Brain::~Brain(void)
{   
	std::cout << "Brain destructor called" << std::endl;  
}
