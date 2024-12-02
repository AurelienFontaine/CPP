/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:01:27 by afontain          #+#    #+#             */
/*   Updated: 2024/12/01 12:28:25 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"


class Animal
{
	protected :
		std::string	_type;
	public :
		Animal();
		Animal(std::string type);
		Animal(Animal &copy);
		virtual ~Animal();

		const std::string getType() const;

		virtual Animal	&operator=(Animal &copy);

		virtual	void	makeSound() const;
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);

#endif
