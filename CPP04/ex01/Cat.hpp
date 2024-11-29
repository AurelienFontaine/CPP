/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:11:19 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 00:17:16 by afontain         ###   ########.fr       */
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
		
		Animal &operator = (Animal &toCopy);
		Cat&	operator=(Cat &ToCopy);

		virtual Brain *getBrain(void) const;
};

#endif