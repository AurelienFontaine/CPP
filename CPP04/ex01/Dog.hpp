/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:29:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 00:15:07 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;
	public :
		Dog(void);
		Dog(std::string type, std::string sound);
		Dog(Dog &ToCopy);
		~Dog(void);
		
		Animal &operator = (Animal &toCopy);
		Dog&	operator=(Dog &ToCopy);
		
		virtual Brain *getBrain(void) const;

};

#endif