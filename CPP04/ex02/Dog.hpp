/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:54:48 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 17:04:50 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(Dog &toCopy);
		~Dog(void);
		Dog(std::string type, std::string sound);
		Animal &operator = (Animal &toCopy);
		Dog	&operator = (Dog &toCopy);

		void makeSound(void) const;
		virtual Brain *getBrain(void) const;
};

#endif
