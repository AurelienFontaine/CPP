/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:13:09 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 15:10:06 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <string.h>
# include <iostream>

class WrongAnimal
{
	protected :
		std::string _type;
		std::string _sound;
	public :
		WrongAnimal(void);
		WrongAnimal(std::string type, std::string sound);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &ToCopy);
		WrongAnimal&	operator=(const WrongAnimal &ToCopy);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif