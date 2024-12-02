/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:02:35 by afontain          #+#    #+#             */
/*   Updated: 2024/12/01 12:57:45 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


/// TEST SANS VIRTUAL
// class Animal {
// public:
//     ~Animal() { // Not virtual
//         std::cout << "Animal Destructor\n";
//     }
// };

// class Cat : public Animal {
// public:
//     ~Cat() {
//         std::cout << "Cat Destructor\n";
//     }
// };

// int main() {
//     Animal* animal = new Cat();
//     delete animal; // Only Animal's destructor is called, Cat's destructor is skipped
//     return 0;
// }

void	test1(void) {
	Dog	dog1("epjf");	std::cout << std::endl;
	std::cout << "This is dog1, his type is "<< dog1.getType() << std::endl;
	std::cout << "dog1 will make a sound : "; dog1.makeSound();

	std::cout << std::endl << "------------------" << std::endl << std::endl;

	Cat	cat1;	std::cout << std::endl;
	std::cout << "This is cat1, his type is "<< cat1.getType() << std::endl;
	std::cout << "cat1 will make a sound : "; cat1.makeSound();
	std::cout << std::endl << "------------------" << std::endl << std::endl;
}

void	test2(void) {

	Cat	cat1;	std::cout << std::endl;

	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	cat1.getBrain()->getIdea(58) = "Salut";
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;
	cat1.getBrain()->setIdea(58, "Salut");
	std::cout << "Printing idea 58 of cat1 : " << cat1.getBrain()->getIdea(58) << std::endl;

	std::cout << std::endl << "------------------" << std::endl << std::endl;

	Dog*	dog1 = new Dog();	std::cout << std::endl;

	//Test copie profonde
	std::cout << "--------Test copie profonde-----------" <<std::endl;
	{
		Dog tempdog = *dog1;
	}
	std::cout << "--------------------" << std::endl;

	Dog dog2 = *dog1;
	Dog dog3(dog2);
	dog2 = dog3;

	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	dog1->getBrain()->getIdea(58) = "Salut";
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl;
	dog1->getBrain()->setIdea(58, "Salut");
	std::cout << "Printing idea 58 of dog1 : " << dog1->getBrain()->getIdea(58) << std::endl << std::endl;
	std::cout << "Printing idea 58 of dog2 : " << dog2.getBrain()->getIdea(58) << std::endl << std::endl;

	std::cout << std::endl << "------------------" << std::endl << std::endl;
	delete dog1;
}

void	test3(void) {

	int	nbAnimals = 10;

	Animal*	animals[nbAnimals];

	for (int i = 0; i < nbAnimals / 2; i++) {

		std::cout << "Construction of animal n°" << i << ":" << std::endl;
		animals[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = nbAnimals / 2; i < nbAnimals; i++) {

		std::cout << "Construction of animal n°" << i << ":" << std::endl;
		animals[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < nbAnimals; i++) {

		std::cout << "Animal n°" << i << " will make a sound : ";
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < nbAnimals; i++) {

		std::cout << "Destruction of animal n°" << i << ":" << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}
}

int	main(int argc, char **argv) {

	// (void)argc; (void)argv;
	// Cat Test;
	// std::cout << std::endl;
	// Cat tmp1 = Test;
	// std::cout << std::endl;
	
	if (argc == 1) {
		std::cout << "#######_DEFAULT TEST (TEST 3)_#######" << std::endl << std::endl;
		test3();
		return (1);
	}

	std::string test(argv[1]);

	if (test.compare("1") == 0) {

		std::cout << "#######_TEST 1_#######" << std::endl << std::endl;
		test1();
	}
	else if (test.compare("2") == 0) {

		std::cout << "#######_TEST 2_#######" << std::endl << std::endl;
		test2();
	}
	else if (test.compare("3") == 0) {

		std::cout << "#######_TEST 3_#######" << std::endl << std::endl;
		test3();
	}
	else {
		std::cerr << "Animals : Error : no test " << test << " available"<< std::endl;
	}
	return (0);
}
