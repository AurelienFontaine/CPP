/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:57 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 01:00:24 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string.h>
# include <iostream>

#include "Brain.hpp"

class Animal
{
	protected :
		std::string _type;
		std::string _sound;
	public :
		Animal(void);
		Animal(std::string type, std::string sound);
		Animal(Animal &ToCopy);
		virtual ~Animal(void);
		
		Animal&	operator=(Animal &ToCopy);

		std::string getType(void) const;
		std::string	getSound(void) const;
		void makeSound(void) const;
		virtual Brain *getBrain(void) const;
		// virtual Brain *getBrain(void) const = 0; Exo2
};

#endif