/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:35 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:01:37 by afontain         ###   ########.fr       */
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
		Cat(std::string type, std::string sound);
		Cat(Cat &toCopy);
		~Cat(void);

		Animal &operator = (Animal &toCopy);
		Cat &operator = (Cat &toCopy);

		virtual Brain *getBrain(void) const;
};

#endif
