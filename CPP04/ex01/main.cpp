/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:48 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:02:53 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void )
{
	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
	// Animal	*animals[8];
	// Brain	*brain;

	// for (int i = 0; i < 8; i++)
	// {
	// 	if (i < 8 / 2)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// 	std::cout << animals[i]->getType() << std::endl;
	// 	std::cout << std::endl;
	// }
	// brain = animals[3]->getBrain();
	// brain->ideas[0] = "Bonjour";
	// brain->ideas[1] = "Bonsoir ?";
	// brain->ideas[2] = "Ceci est un test";
	// brain->ideas[3] = "Oui";
	// std::cout<<"animal 3 = ";
	// std::cout << animals[3]->getBrain()->ideas[0] << std::endl;

	// *animals[5] = *animals[3];
	// std::cout<<"animal 5 = ";
	// std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	// animals[5]->getBrain()->ideas[2] = "ooooooooooooooooooo";
	// std::cout << animals[3]->getBrain()->ideas[2] << std::endl;
	// std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
	// std::cout << std::endl;

	// for (int i = 0; i < 8; i++)
	// 	delete animals[i];
	// std::cout << std::endl;

	// Dog dog1;
	// Dog dog2;

	// std::cout<<std::endl;
	// dog1.getBrain()->ideas[12]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	// std::cout << dog1.getBrain()->ideas[12] << std::endl;

	// dog2 = dog1;
	// dog1.getBrain()->ideas[12] = "Pourquoi ?";
	// std::cout << dog2.getBrain()->ideas[12] << std::endl;
	// std::cout<<std::endl;

	// const Animal* j = new Dog();
	// std::cout<<std::endl;
	// const Animal* i = new Cat();
	// std::cout<<std::endl;
	// delete j; // should not create a leak
	// std::cout<<std::endl;
	// delete i;
	// return (0);
}