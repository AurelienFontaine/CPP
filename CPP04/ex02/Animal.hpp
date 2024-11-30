/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:55:22 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:32:20 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
		std::string	_sound;

	public:
	    Animal(void);
		virtual ~Animal(void);
		Animal(std::string type, std::string sound);
		virtual Animal &operator = (Animal &toCopy);

		std::string	getType(void) const;
		std::string	getSound(void) const;
		virtual void makeSound(void) const = 0;
		virtual Brain *getBrain(void) const = 0;
};

#endif
