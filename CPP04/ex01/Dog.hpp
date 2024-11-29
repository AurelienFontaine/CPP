/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:29:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 18:24:59 by afontain         ###   ########.fr       */
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
		
		Dog&	operator=(Dog &ToCopy);

};

#endif