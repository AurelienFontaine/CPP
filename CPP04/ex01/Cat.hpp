/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:01:41 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:40:25 by afontain         ###   ########.fr       */
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
		Cat();
		Cat(std::string type);
		Cat(Cat &copy);
		~Cat();

		Cat	&operator=(Cat &copy);

		virtual Brain *getBrain(void) const;

		void	makeSound() const;
};

#endif
