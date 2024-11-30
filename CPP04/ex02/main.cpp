/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:54:45 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 17:13:46 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	Animal	*animals[8];
	Brain	*brain;
	// Animal  Test("Yo", "Meuhh"); Ne peux pas creer a cause de la classe abstraite
	// const Animal* meta = new Animal("TEST", "NUIT");
	
	// const Animal* dog = new Dog("CHIENGG", "WOUFWOUF");
	// const Animal* cat = new Cat();

	// std::cout << cat->getType() << " " << std::endl;
	// cat->makeSound();
	// std::cout << std::endl;
	// std::cout << dog->getType() << " " << std::endl;
	// dog->makeSound();
	// std::cout << std::endl;
	// // std::cout << meta->getType() << " " << std::endl;
	// // meta->makeSound();
	// std::cout << std::endl;
	// // delete meta;
	// // std::cout << std::endl;
	// delete dog;
	// std::cout << std::endl;
	// delete cat;

	for (int i = 0; i < 8; i++)
	{
		if (i < 8 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
		std::cout<<std::endl;
	}
	brain = animals[2]->getBrain();
	brain->ideas[0] = "Aujourd'hui il fait beau";
	brain->ideas[1] = "Pourquoi ?";
	brain->ideas[2] = "Aucune idee ...";
	brain->ideas[3] = "TEST TEST TEST";
	std::cout<<"Animal 2 = ";
	std::cout << animals[2]->getBrain()->ideas[0] << std::endl;

	std::cout << animals[5]->getType() << std::endl;
	*animals[5] = *animals[2];
	std::cout << animals[5]->getType() << std::endl;
	
	std::cout<<"Animal 5 = ";
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
	std::cout<<std::endl;

	for (int i = 0; i < 8; i++)
		delete animals[i];
	std::cout<<std::endl;

	Dog dog1;
	Dog dog2;

	std::cout<<std::endl<<std::endl;
	dog1.getBrain()->ideas[12]="Quelle bonne idee !";
	std::cout << dog1.getBrain()->ideas[12] << std::endl;

	dog2 = dog1;
	std::cout << dog2.getBrain()->ideas[12] << std::endl;
	std::cout<<std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}