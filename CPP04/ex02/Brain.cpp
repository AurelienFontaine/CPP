/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:55:17 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 14:55:18 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called " << std::endl;
	return ;
}

Brain::Brain(Brain &toCopy)
{
	std::cout << "Brain copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called " << std::endl;
	return ;
}

Brain	&Brain::operator = (Brain &toCopy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = toCopy.ideas[i];
	return (*this);
}
