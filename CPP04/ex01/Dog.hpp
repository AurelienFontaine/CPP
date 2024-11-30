/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:44 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:01:46 by afontain         ###   ########.fr       */
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
		Dog(std::string type, std::string sound);
		Dog(Dog &toCopy);
		~Dog(void);

		Animal &operator = (Animal &toCopy);
		Dog	&operator = (Dog &toCopy);

		virtual Brain *getBrain(void) const;
};

#endif
