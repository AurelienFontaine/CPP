/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:57 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 18:17:56 by afontain         ###   ########.fr       */
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
		virtual ~Animal(void);
		Animal(Animal &ToCopy);
		Animal&	operator=(Animal &ToCopy);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif