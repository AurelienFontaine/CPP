/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:11:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:12:44 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include <string.h>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	protected :
		std::string _type;
	public :
		Cat(void);
		Cat(std::string Type);
		~Cat(void);
		Cat(const Cat &ToCopy);
		Cat&	operator=(const Cat &ToCopy);

		void makesound(std::string type);
};

#endif