/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:20:57 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:04:45 by afontain         ###   ########.fr       */
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
	public :
		Animal(void);
		Animal(std::string Type);
		~Animal(void);
		Animal(const Animal &ToCopy);
		Animal&	operator=(const Animal &ToCopy);

		void makesound(std::string type);
};

#endif