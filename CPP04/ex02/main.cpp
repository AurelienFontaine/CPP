/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:03:14 by afontain          #+#    #+#             */
/*   Updated: 2024/12/01 12:53:44 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	// Animal TEST; No instanciable
	
	std::cout << "-----Basic Test-------" << std::endl << std::endl;
	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	
	std::cout << "------------" << std::endl << std::endl;
	Cat	cat1;	std::cout << std::endl;
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	cat1.getBrain()->getIdea(58) = "Salut";
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	cat1.getBrain()->setIdea(58, "Salut");
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;

	std::cout << std::endl << "------------------" << std::endl;

	Dog*	dog1 = new Dog();	std::cout << std::endl;

	//Test copie profonde
	std::cout << "---------Test copie profonde---------" <<std::endl;
	{
		Dog tempdog = *dog1;
	}
	std::cout<< std::endl << "--------------" << std::endl;

	Dog dog2 = *dog1;
	Dog dog3(dog2);
	dog2 = dog3;

	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	dog1->getBrain()->getIdea(58) = "Salut";
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	dog1->getBrain()->setIdea(58, "Salut");
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	std::cout << "Printing idea 58 of dog2 : " << dog2.getBrain()->getIdea(58) << std::endl;

	std::cout << "------------------" << std::endl << std::endl;
	delete dog1;
	return 0;
}