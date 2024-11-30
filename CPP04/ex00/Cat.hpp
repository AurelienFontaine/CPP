/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:11:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 14:23:09 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include <string.h>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(std::string type, std::string sound);
		~Cat(void);
		Cat(Cat &ToCopy);
		
		Cat&	operator=(Cat &ToCopy);
};

#endif