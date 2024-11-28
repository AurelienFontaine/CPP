/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:29:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:13:03 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include <string.h>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	protected :
		std::string _type;
	public :
		Dog(void);
		Dog(std::string Type);
		~Dog(void);
		Dog(const Dog &ToCopy);
		Dog&	operator=(const Dog &ToCopy);

		void makesound(std::string type);
};

#endif