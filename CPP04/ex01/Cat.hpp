/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:11:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 18:24:06 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP


# include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain *_brain;
	public :
		Cat(void);
		Cat(std::string type, std::string sound);
		~Cat(void);
		Cat(Cat &ToCopy);
		
		Cat&	operator=(Cat &ToCopy);
};

#endif