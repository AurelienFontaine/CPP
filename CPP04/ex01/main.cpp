/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:21:02 by afontain          #+#    #+#             */
/*   Updated: 2024/11/29 15:36:57 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	{ //Mandatory test
		std::cout << "//////////////////MANDATORY TEST///////////////" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	
	{ // Test for deep cpy of brain
				std::cout << "//////////////////DEEP CPY TEST///////////////" << std::endl;

		Dog basic;
		{
			Dog tmp = basic;
		}
	}
	std::cout << "//////////////////SOME TESTS///////////////" << std::endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << "j type: " << j->getType() << " " << std::endl;
	// std::cout << "i type: " << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();

	// delete j;
	// delete i;
	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}