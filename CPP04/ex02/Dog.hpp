/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:03:09 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:03:10 by afontain         ###   ########.fr       */
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
		Dog();
		Dog(std::string type);
		Dog(Dog &copy);
		~Dog();

		Dog	&operator=(Dog &copy);

		virtual Brain *getBrain(void) const;

		void	makeSound() const;
};

#endif
