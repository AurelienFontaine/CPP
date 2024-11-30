/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:55:00 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 17:11:12 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(Cat &toCopy);
		~Cat(void);

		Animal &operator = (Animal &toCopy);
		Cat &operator = (Cat &toCopy);
		Cat(std::string type, std::string sound);
		void makeSound(void) const;
		virtual Brain *getBrain(void) const;
};

#endif
