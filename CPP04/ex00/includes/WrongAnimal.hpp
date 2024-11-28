/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:13:09 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:13:23 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <string.h>
# include <iostream>
# include "Animal.hpp"

class WrongAnimal : public Animal
{
	protected :
		std::string _type;
	public :
		WrongAnimal(void);
		WrongAnimal(std::string Type);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &ToCopy);
		WrongAnimal&	operator=(const WrongAnimal &ToCopy);

		void makesound(std::string type);
};

#endif