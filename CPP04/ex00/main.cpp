/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:21:02 by afontain          #+#    #+#             */
/*   Updated: 2024/12/01 12:21:07 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "-------" << std::endl;
	Animal	first("Chieng", "WOOOOF");
	Animal	second = first;
	Animal	third("Cat", "MIAOUMIAOU");
	third = first;
	std::cout << "-------" << std::endl;
	
	const Animal* meta = new Animal("TEST", "NUIT");
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "-------" << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << "-------" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << "-------" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "-------" << std::endl;
	delete meta;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete cat;

	//////////////////////////////////////////
	
	std::cout << std::endl << std::endl;
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << std::endl;
	std::cout << catWrong->getType() << std::endl;
	catWrong->makeSound();
	std::cout << std::endl;
	std::cout << metaWrong->getType() << std::endl;
	metaWrong->makeSound();
	std::cout << std::endl;
	delete metaWrong;
	delete catWrong;
	return(0);
}