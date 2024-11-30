/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:57 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:14:06 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string.h>
# include <iostream>

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
		virtual void makeSound(void) const;
};

#endif